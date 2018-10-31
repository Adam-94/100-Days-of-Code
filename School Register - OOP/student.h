#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
private:
    std::string studentID;
    std::string studentName;
    std::string groupID;
    std::string attendanceRecord;

public:
    std::string getStudentID() { return studentID; }
    std::string getStudentName() { return studentName; }
    std::string getGroupID() { return groupID; }
    std::string getAttendance() { return attendanceRecord; }

    virtual void enterStudentID() { std::cin >> studentID; }
    virtual void enterStudentName() { std::cin >> studentName; }
    virtual void enterGroupID() { std::cin >> groupID; }
    virtual void enterAttendance() { std::cin >> attendanceRecord; }

    void setStudentID(std::string ID) { studentID = ID; }
    void setStudentName(std::string N) { studentName = N; }
    void setGroupID(std::string ID) { groupID = ID; }
    void setAttendance(std::string A) { attendanceRecord = A; }
};

#endif // STUDENT_H
