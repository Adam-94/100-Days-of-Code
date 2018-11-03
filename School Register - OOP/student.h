#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
private:
    std::string studentID;
    std::string studentName;
    std::string groupID;
    int attendanceRecord;
    int NumOfStudents;

public:
    std::string getStudentID() { return studentID; }
    std::string getStudentName() { return studentName; }
    std::string getGroupID() { return groupID; }
    int getAttendance() { return attendanceRecord; }
    int getNumOfStudents() { return NumOfStudents; }


    virtual void enterStudentID() { std::cin >> studentID; }
    virtual void enterStudentName() { std::cin >> studentName; }
    virtual void enterGroupID() { std::cin >> groupID; }
    virtual void enterAttendance() { std::cin >> attendanceRecord; }
    virtual void enterNumOfStudents() { std::cin >> NumOfStudents; }

    void setStudentID(std::string ID) { studentID = ID; }
    void setStudentName(std::string N) { studentName = N; }
    void setGroupID(std::string ID) { groupID = ID; }
    void setAttendance(int A) { attendanceRecord = A; }
    void setNumOfStudents(int N) { NumOfStudents = N; }
};

#endif // STUDENT_H
