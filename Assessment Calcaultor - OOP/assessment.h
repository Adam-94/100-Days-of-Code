#ifndef ASSESMENT_H
#define ASSESMENT_H

#include <iostream>

class Assessment
{
private:
    int aMark;
    std::string aTitle;
    double aWeighting;
    unsigned int assessmentNum;
public:
    int getMark() { return aMark; }
    double getWeighting() { return aWeighting; }
    std::string getTitle() { return aTitle; }

    virtual void enterMark() { std::cin >> aMark; }
    virtual void enterWeighting() { std::cin >> aWeighting; }
    virtual void enterTitle() { std::cin >> aTitle; }

    void setMark(int mark) { aMark = mark; }
    void setWeighting(double weight) { aWeighting = weight; }
    void setAssessmentNum(unsigned int aNum)  { assessmentNum = aNum; }
    unsigned int getAssessmentNum() { return assessmentNum; }
};

#endif // ASSESMENT_H
