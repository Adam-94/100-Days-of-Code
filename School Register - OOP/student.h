#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
private:
    int studentID;
    int groupID;
    int attendanceRecord;
    int NumOfStudents;
    std::string studentName;

public:
    int getStudentID() { return studentID; }
    int getGroupID() { return groupID; }
    int getAttendance() { return attendanceRecord; }
    int getNumOfStudents() { return NumOfStudents; }
    std::string getStudentName() { return studentName; }

    virtual void enterStudentID();
    virtual void enterStudentName();
    virtual void enterGroupID();
    virtual void enterAttendance();
    virtual void enterNumOfStudents();

    void setStudentID(int ID) { studentID = ID; }
    void setStudentName(std::string N) { studentName = N; }
    void setGroupID(int ID) { groupID = ID; }
    void setAttendance(int A) { attendanceRecord = A; }
    void setNumOfStudents(int N) { NumOfStudents = N; }

    template<typename T> void checkUserInput(T& t);
};

#endif // STUDENT_H
