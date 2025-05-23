/***************************************************************************
                          addgroupactivitiesininitialorderitemform.h  -  description
                             -------------------
    begin                : 2014
    copyright            : (C) 2014 by Liviu Lalescu
    email                : Please see https://lalescu.ro/liviu/ for details about contacting Liviu Lalescu (in particular, you can find there the email address)
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU Affero General Public License as        *
 *   published by the Free Software Foundation, either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 ***************************************************************************/

#ifndef ADDGROUPACTIVITIESININITIALORDERITEMFORM_H
#define ADDGROUPACTIVITIESININITIALORDERITEMFORM_H

#include "ui_addgroupactivitiesininitialorderitemform_template.h"
#include "timetable_defs.h"
#include "timetable.h"
#include "fet.h"

#include <QList>

#include <QSet>
#include <QString>

class AddGroupActivitiesInInitialOrderItemForm : public QDialog, Ui::AddGroupActivitiesInInitialOrderItemForm_template {
	Q_OBJECT

public:
	AddGroupActivitiesInInitialOrderItemForm(QWidget* parent);
	~AddGroupActivitiesInInitialOrderItemForm();

	bool filterOk(Activity* a);

public slots:
	void addActivity();
	void addAllActivities();
	void removeActivity();

	void addItem();

	void filterChanged();
	
	void studentsFilterChanged();
	
	void clear();
	
private:
	QSet<QString> showedStudents;

	//the id's of the activities listed in the activities list
	QList<int> activitiesList;
	//the id-s of the activities listed in the list of selected activities
	QList<int> selectedActivitiesList;
};

#endif
