#include "menu.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

Menu::Menu(std::vector<Student>& v) : students(v)
{

}

void Menu::displayOptions()
{
    std::string options;
    std::ifstream input;

    input.open("B:\\Desktop\\School Register\\displayOptions.txt");
    if (!input)
    {
        std::cout << "File not found!";
    }

    while (!input.eof())
    {
        std::getline(input, options);
        std::cout << "\t" << options << "\n";
    }
    input.close();
    optionSelction();
}

void Menu::optionSelction()
{
    int select;
    std::cout << "\nPress (1-7): ";
    std::cin >> select;

    while (select < 1 || select > 7)
    {
        std::cout << "Wrong input, try again: ";
    }
}

void Menu::addStudent(Student* addS)
{
    std::cout << std::string(100, '\n');

    int numOfStudents;
    std::cout << "Enter the amount of students: ";
    std::cin >> numOfStudents;

    for (int i = 1; i <= numOfStudents; ++i)
    {
        std::cout << i << "\t" << "Student ID:\t";
        addS->enterStudentID();
        std::cout << i << "\t" << "Student Name:\t";
        addS->enterStudentName();
        std::cout << i << "\t" << "Group ID:\t";
        addS->enterGroupID();
        std::cout << i << "\t" << "Attendance:\t";
        addS->enterAttendance();

        students.push_back(*addS);
        std::cout << "\n\n";
    }


}

void Menu::dispalyRegister()
{

    std::string regdisplay
    {
      "\t_____________________________________________\n"
      "\t| \tID | \tGroup ID | \tName | \tAttendance |\n"
    };
}
