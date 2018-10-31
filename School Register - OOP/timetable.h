#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <iostream>

class Timetable
{
private:
    int numOfWeeks;
    int numofLessons;
public:
    void createTimetable();
    int getWeeks() { return numOfWeeks; }
    int getLessons() { return numofLessons; }

    virtual void enterWeeks() { std::cin >> numOfWeeks; }
    virtual void enterLessons() { std::cin >> numofLessons; }

    void setWeeks(int W) { numOfWeeks = W; }
    void setDays(int L) { numofLessons = L; }

};

#endif // TIMETABLE_H
