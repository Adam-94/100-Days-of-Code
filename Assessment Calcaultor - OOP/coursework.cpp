#include "coursework.h"

#include <iostream>

void Coursework::enterMark()
{
    setMark(-1);
    while (getMark() < 0 || getMark() > 100)
    {
        std::cout << "Enter coursework " << getAssessmentNum() + 1
                  << " result (0-100): ";
        Assessment::enterMark();
    }
}

void Coursework::enterWeighting()
{
    setWeighting(0);
    while (!(getWeighting() == 0.1 || getWeighting() == 0.2))
    {
        std::cout << "Enter coursework " << getAssessmentNum() + 1
                  << " weighting (0.1 - 0.2): ";
        Assessment::enterWeighting();
    }
}

void Coursework::enterTitle()
{
    std::cout << "Enter coursework " << getAssessmentNum() + 1
              << " title: ";
    Assessment::enterTitle();
}
