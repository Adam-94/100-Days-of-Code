#ifndef MENU_H
#define MENU_H

#include "student.h"
#include "timetable.h"

class Menu
{
public:
    void displayOptions();
    void optionSelction();

    void addStudent(Student*);
    void addTimetable(Timetable*);

    int calculateAttendance();
};

#endif // MENU_H
