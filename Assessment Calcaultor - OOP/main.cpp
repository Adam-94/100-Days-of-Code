#include "module.h"
#include "coursework.h"
#include "exam.h"

#include <iostream>


int main()
{

    unsigned int numOfCoursework = 0;
    std::cout << "Enter number of courseworks: ";
    std::cin >> numOfCoursework;

    std::vector<Assessment> Assessments;
    Module pMyModule = Module("<<OO Programming>>", Assessments);

    //Add coursework
    for (int i = 1; i <= numOfCoursework; ++i)
    {
        pMyModule.addCoursework(new Coursework());
    }

    //Add exam
    pMyModule.addExam(new Exam());
    pMyModule.calculateModuleMark();

    return 0;
}
