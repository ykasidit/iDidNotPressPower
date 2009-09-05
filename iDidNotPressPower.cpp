/*
    Copyright (C) 2009 Kasidit Yusuf.

    This file is part of iDidNotPressPower.

    iDidNotPressPower is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    iDidNotPressPower is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with iDidNotPressPower.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "iDidNotPressPower.h"
#include <QProcess>

AutoShutdown::AutoShutdown(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	iTimerId = startTimer(1000);  //1 second
	iCountDown = 60;
}

void AutoShutdown::timerEvent(QTimerEvent* /*event*/)
{
	iCountDown--;

	if(iCountDown > 0)
	  {
		ui.label->setText("Shutting down in "+QString::number(iCountDown)+" Seconds");
		show();
		raise();
		activateWindow();


	  }
	else
	{
		ui.label->setText("Shutting down now...");
		QString cmd;
		QStringList arguments;
#ifdef Q_WS_WIN
                cmd = "shutdown.exe";
                arguments << "-s";
                arguments << "-t";
                arguments << "01";
#else
                //this app must be run as root, for example, in ubuntu startup list manager use command: "echo \"mypassword\" | sudo -S /home/<your user>/<folder>/iDidNotPressPower"
                cmd = "halt";
#endif
                QProcess builder;
                builder.setProcessChannelMode(QProcess::MergedChannels);
                builder.start(cmd,arguments);

		if (!builder.waitForFinished())
		   ui.label->setText(builder.errorString());
		 else
		   ui.label->setText(builder.readAll());

		//close(); dont close - let result/error show on screen
	}
}

void AutoShutdown::OnCancel()
{
	killTimer(iTimerId);
	ui.label->setText("Cancelled...");
	this->close();
}

AutoShutdown::~AutoShutdown()
{

}
