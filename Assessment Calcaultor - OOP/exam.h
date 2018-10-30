#ifndef EXAM_H
#define EXAM_H

#include <assessment.h>

class Exam : public Assessment
{
public:
    void enterMark();
    void enterWeighting();
    void enterTitle();
};

#endif // EXAM_H
