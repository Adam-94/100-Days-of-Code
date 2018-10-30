#ifndef COURSEWORK_H
#define COURSEWORK_H

#include "assessment.h"

class Coursework : public Assessment
{
public:
    void enterMark();
    void enterWeighting();
    void enterTitle();
};

#endif // COURSEWORK_H
