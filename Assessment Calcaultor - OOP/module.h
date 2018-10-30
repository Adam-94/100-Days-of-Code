#ifndef MODULE_H
#define MODULE_H

#include <assessment.h>
#include <vector>

class Module
{
private:
    double moduleMark;
    std::string moduleTitle;
    std::vector<Assessment>& Assessments;
public:
    Module(std::string moduleTitle, std::vector<Assessment>& v);
    void addCoursework(Assessment*);
    void addExam(Assessment*);
    int calculateModuleMark();
};

#endif // MODULE_H
