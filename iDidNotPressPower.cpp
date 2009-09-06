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

#ifndef Q_WS_WIN
#include <X11/Xlib.h>
#else
#include <Windows.h>
#endif

AutoShutdown::AutoShutdown(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	iTimerId = startTimer(1000);  //1 second
	iCountDown = 60;
	iPrevX = -1;
	iPrevY = -1;
}

bool AutoShutdown::GetPointerPos(int& x, int &y)
{
#ifdef Q_WS_WIN
  POINT p ={0};
  ::GetCursorPos(&p);
  x = p.x;
  y = p.y;
#else
      Display *dpy;
      Window root;
      Window ret_root;
      Window ret_child;
      int root_x;
      int root_y;
      int win_x;
      int win_y;
      unsigned int mask;

      dpy = XOpenDisplay(NULL);
      root = XDefaultRootWindow(dpy);

      if(XQueryPointer(dpy, root, &ret_root, &ret_child, &root_x, &root_y,
                                       &win_x, &win_y, &mask))
      {
        x= root_x;
        y= root_y;
      }
      else
      {
        return false;
      }
#endif

      return true;
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

		if(iPrevX == -1) //if first time pos not initialized
		  GetPointerPos(iPrevX,iPrevY);
		else
		  {
		    int nowx=-1;
		    int nowy=-1;
		    if(GetPointerPos(nowx,nowy))
		      {
                        if(nowx!=iPrevX || nowy!=iPrevY)
                          {
                            //mouse moved so exit
                            ui.label->setText("Mouse moved - user active, Cancelling...");
                            this->close();
                          }
                        else
                          {
                            //do nothing
                          }
		      }
		  }
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
                QProcess shutdownproc;
                shutdownproc.setProcessChannelMode(QProcess::MergedChannels);
                shutdownproc.start(cmd,arguments);

		if (!shutdownproc.waitForFinished())
		   ui.label->setText(shutdownproc.errorString());
		 else
		   ui.label->setText(shutdownproc.readAll());

		//close(); dont close - let result/error show on screen
	}
}

void AutoShutdown::OnCancel()
{
	ui.label->setText("Cancelled...");
	this->close();
}

AutoShutdown::~AutoShutdown()
{
  killTimer(iTimerId);
}
