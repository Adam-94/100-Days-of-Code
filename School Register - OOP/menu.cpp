#include "menu.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

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

    while (std::cin.fail() || select < 1 || select > 7)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Not valid try again: ";
        std::cin >> select;
    }
}

void Menu::addStudent(Student* addS)
{
    std::cout << std::string(100, '\n');
    std::cout << "Enter the amount of students: ";
    addS->enterNumOfStudents();

    for (int i = 1; i <= addS->getNumOfStudents(); ++i)
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
    std::cout << std::setw(15) << "[ID]"
              << std::setw(15) << "[GROUP ID]"
              << std::setw(15) << "[NAME]"
              << std::setw(15) << "[Attendance]" << "\n";

    for (auto& it : students)
    {
        std::cout << std::setw(15) << it.getStudentID()
                  << std::setw(15) << it.getGroupID()
                  << std::setw(15) << it.getStudentName()
                  << std::setw(15) << it.getAttendance() << "\n";
    }
}
