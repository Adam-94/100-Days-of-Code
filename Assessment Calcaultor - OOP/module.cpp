#include <module.h>

#include <iostream>
#include <string>

Module::Module(std::string moduleTitle,
               std::vector<Assessment>& v) : Assessments(v)
{
    std::cout << "Module " << moduleTitle << " created!" << "\n\n";
}

void Module::addCoursework(Assessment* pA)
{
    pA->setAssessmentNum(Assessments.size());
    pA->enterTitle();
    pA->enterWeighting();
    pA->enterMark();
    Assessments.push_back(*pA);
}

void Module::addExam(Assessment* pA)
{
    double examWeighting = 1;
    pA->enterTitle();
    pA->enterMark();

    for (unsigned int i = 0; i < Assessments.size(); ++i)
    {
        examWeighting = examWeighting - Assessments[i].getWeighting();
    }
    pA->setWeighting(examWeighting);
    Assessments.push_back(*pA);
}

int Module::calculateModuleMark()
{
    moduleMark = 0;
    for (unsigned int i = 0; i < Assessments.size(); ++i)
    {
        moduleMark = moduleMark + Assessments[i].getMark()
                           * Assessments[i].getWeighting();
    }
    std::cout << "\nModule Mark: " << moduleMark << "\n\n";
    return moduleMark;
}



