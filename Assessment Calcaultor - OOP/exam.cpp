#include <exam.h>

#include <iostream>

void Exam::enterMark()
{
    setMark(-1);
    while (getMark() < 0 || getMark() > 100)
    {
        std::cout << "Enter exam result (0-100): ";
        Assessment::enterMark();
    }
}

void Exam::enterWeighting()
{
    std::cout << "Calculated exam weighting: " << getWeighting();
}

void Exam::enterTitle()
{
    std::cout << "\nEnter exam title: ";
    Assessment::enterTitle();
}
