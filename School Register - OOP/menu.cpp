#include "menu.h"

#include <iostream>
#include <fstream>

void Menu::displayOptions()
{
    std::string options;
    std::ifstream input;

    input.open("B:\\Desktop\\School Register\\displayOptions.txt");
    if (!input)
    {
        std::cerr << "File not found!";
    }

    while (!input.eof())
    {
        std::getline(input, options);
        std::cout << "\t" << options << "\n";
    }
    input.close();
}

void Menu::optionSelction()
{

}

void Menu::addStudent(Student* addStudent)
{
    addStudent->enterStudentID();
    addStudent->enterStudentName();
    addStudent->enterGroupID();
}

