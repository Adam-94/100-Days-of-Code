#include "student.h"

void Student::enterStudentID()
{
    checkUserInput(studentID);
}

void Student::enterGroupID()
{
    checkUserInput(groupID);
}

void Student::enterStudentName()
{
   checkUserInput(studentName);
}

void Student::enterAttendance()
{
    checkUserInput(attendanceRecord);
}

void Student::enterNumOfStudents()
{
    checkUserInput(NumOfStudents);
}

template<typename T> void Student::checkUserInput(T& t)
{
    std::cin >> t;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Wrong input, try again: ";
        std::cin >> t;
    }
}
