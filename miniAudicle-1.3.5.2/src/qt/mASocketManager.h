/*----------------------------------------------------------------------------
miniAudicle
GUI to ChucK audio programming environment

Copyright (c) 2005-2013 Spencer Salazar.  All rights reserved.
http://chuck.cs.princeton.edu/
http://soundlab.cs.princeton.edu/

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
U.S.A.
-----------------------------------------------------------------------------*/

#ifndef MASOCKETMANAGER_H
#define MASOCKETMANAGER_H

#include <QObject>
#include <QLocalSocket>
#include <QLocalServer>

class mAMainWindow;

class mASocketManager : public QObject
{
    Q_OBJECT
public:
    explicit mASocketManager(mAMainWindow * mainWindow, QObject *parent = 0);
    
    void startServer();
    static bool openFileOnRemote(const QString &path);
    
signals:
        
public slots:
    void newConnection();
    
private:
    
    mAMainWindow * const m_mainWindow;
    
    QLocalServer * m_server;
};

#endif // MASOCKETMANAGER_H