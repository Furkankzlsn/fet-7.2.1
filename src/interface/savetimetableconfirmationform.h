//
//
// Description: This file is part of FET
//
//
// Author: Liviu Lalescu (Please see https://lalescu.ro/liviu/ for details about contacting Liviu Lalescu (in particular, you can find there the email address))
// Copyright (C) 2003 Liviu Lalescu <https://lalescu.ro/liviu/>
//
/***************************************************************************
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU Affero General Public License as        *
 *   published by the Free Software Foundation, either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 ***************************************************************************/

#ifndef SAVE_TIMETABLE_CONFIRMATION_FORM_H
#define SAVE_TIMETABLE_CONFIRMATION_FORM_H

#include "ui_savetimetableconfirmationform_template.h"

class SaveTimetableConfirmationForm: public QDialog, Ui::SaveTimetableConfirmationForm_template
{
	Q_OBJECT

public:
	bool dontShowAgain;

	SaveTimetableConfirmationForm(QWidget* parent);
	~SaveTimetableConfirmationForm();

public slots:
	void dontShowAgainCheckBoxToggled();
};

#endif
