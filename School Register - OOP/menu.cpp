#include "menu.h"

#include <iostream>
#include <fstream>

void Menu::addStudent(Student* addStudent)
{
    addStudent->enterStudentID();
    addStudent->enterStudentName();
    addStudent->enterGroupID();
}
