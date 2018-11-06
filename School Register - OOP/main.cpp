#include <iostream>


#include "menu.h"
#include <student.h>

int main()
{
    std::vector<Student> v;
    Menu* m = new Menu(v);


    m->displayOptions();
    m->optionSelction();
    m->addStudent(new Student);
    m->displayRegister();

    return 0;
}
