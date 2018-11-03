#include <iostream>


#include "menu.h"
#include <student.h>

int main()
{
    std::vector<Student> v;
    Menu m = Menu(v);


    m.displayOptions();
    m.addStudent(new Student);
    m.dispalyRegister();

    return 0;
}
