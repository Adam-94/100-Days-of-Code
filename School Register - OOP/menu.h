#ifndef MENU_H
#define MENU_H

#include <vector>

#include "student.h"
#include "timetable.h"

class Menu
{
private:
    std::vector<Student>& students;
public:
    Menu(std::vector<Student>& v);

    void displayOptions();
    void optionSelction();

    void addStudent(Student*);
    void editStudent(Student*);
    void deleteStudent(Student*);
    void createTimetable(Timetable*);
    void createGroup(Student*);

    void displayRegister();
    void returnToMenu();
    int calculateAttendance();

    void clearScreen();
};

#endif // MENU_H
