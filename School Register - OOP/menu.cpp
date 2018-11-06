#include "menu.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <windows.h>

Menu::Menu(std::vector<Student>& v) : students(v)
{

}

void Menu::clearScreen()
{
    DWORD n;                         /* Number of characters written */
    DWORD size;                      /* number of visible characters */
    COORD coord = {0};               /* Top left screen position */
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    /* Get a handle to the console */
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

    GetConsoleScreenBufferInfo ( h, &csbi );

    /* Find the number of characters to overwrite */
    size = csbi.dwSize.X * csbi.dwSize.Y;

    /* Overwrite the screen buffer with whitespace */
    FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
    GetConsoleScreenBufferInfo ( h, &csbi );
    FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );

    /* Reset the cursor to the top left position */
    SetConsoleCursorPosition ( h, coord );
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
}

void Menu::optionSelction()
{
    int select = 0;
    std::cout << "\n\nPress (1-7): ";
    std::cin >> select;

    while (std::cin.fail() || select < 1 || select > 7)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Not valid try again: ";
        std::cin >> select;
    }
    clearScreen();
    displayOptions();
}

void Menu::addStudent(Student* addS)
{ 
    std::cout << "\n\nEnter the amount of students: ";
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
    clearScreen();
}

void Menu::displayRegister()
{
    displayOptions();

    std::cout << "\n\n";
    std::cout << '\t' << std::left << std::setw(15) << "[ID]"
              << '\t' << std::left << std::setw(15) << "[GROUP ID]"
              << '\t' << std::left << std::setw(15) << "[NAME]"
              << '\t' << std::left << std::setw(15) << "[Attendance]" << "\n";

    for (auto& it : students)
    {

        std::cout << '\t' << std::left << std::setw(15) << it.getStudentID()
                  << '\t' << std::left << std::setw(15) << it.getGroupID()
                  << '\t' << std::left << std::setw(15) << it.getStudentName()
                  << '\t' << std::left << std::setw(15) << it.getAttendance() << "\n";
    }
}
