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

#ifndef AUTOSHUTDOWN_H
#define AUTOSHUTDOWN_H

#include <QtGui/QWidget>
#include "ui_iDidNotPressPower.h"

class AutoShutdown : public QWidget
{
    Q_OBJECT

public:
    AutoShutdown(QWidget *parent = 0);
    ~AutoShutdown();



public slots:
	void OnCancel();

private:
    Ui::AutoShutdownClass ui;
    void timerEvent(QTimerEvent *event);
    int iTimerId;
    int iCountDown;
};

#endif // AUTOSHUTDOWN_H
