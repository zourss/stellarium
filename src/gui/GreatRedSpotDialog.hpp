/*
 * Stellarium
 * 
 * Copyright (C) 2016 Alexander Wolf
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
*/

#ifndef _GREATREDSPOTDIALOG_HPP_
#define _GREATREDSPOTDIALOG_HPP_

#include <QObject>
#include <QDateTime>
#include "StelDialog.hpp"
#include "SolarSystem.hpp"

class Ui_GreatRedSpotDialogForm;

class GreatRedSpotDialog : public StelDialog
{
	Q_OBJECT

public:
	GreatRedSpotDialog();
	virtual ~GreatRedSpotDialog();

public slots:
        void retranslate();

private slots:
	void setGrsJD(QDateTime dt);
	void openRecentGrsMeasurement();

protected:
        //! Initialize the dialog widgets and connect the signals/slots.
        virtual void createDialogContent();
	Ui_GreatRedSpotDialogForm *ui;

};

#endif // _GREATREDSPOTDIALOG_HPP_
