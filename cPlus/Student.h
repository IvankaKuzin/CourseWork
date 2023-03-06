#pragma once
#include "Person.h"

class Student : public Person
{
private:
    Person person;

    string nameVNZ;
    string faculty;
    int course;
    string group;
    int identifiNumber;
    int mathMark, englishMark, cPlusMark;
    
public:
    Student();
    Student(string nameVNZ, string faculty, int course, string group, int identifiNumber, int mathMark, int englishMark, int cPlusMark);
    Student(string name, string data, string sex, string number, 
        string nameVNZ, string faculty, int course, string group, int identifiNumber, int mathMark, int englishMark, int cPlusMark);

    void SetNameVnz(string Vnz);
    void SetFaculty(string Faculty);
    void SetCourse(int Course);
    void SetGroup(string Group);
    void SetID(int Id);
    void SetMark(int Math, int English, int cPlus);

    string GetNameVnz() const;
    string GetFaculty() const;
    int GetCourse() const;
    string GetGroup() const;
    int GetID() const;
    int GetMath() const;
    int GetEnglish() const;
    int GetCplus() const;

    friend std::istream& operator >> (std::istream& is, Student& temp)
    {
        std::cout << "Input data studunt: \n";
        is >> temp.person;

        std::cout << "Input name VNZ: ";
        is >> temp.nameVNZ;
        is.get();

        std::cout << "Input Faculty: ";
        is >> temp.faculty;
        is.get();

        std::cout << "Input Course: ";
        is >> temp.course;
        is.get();

        std::cout << "Input Group: ";
        is >> temp.group;
        is.get();

        std::cout << "Input Id: ";
        is >> temp.identifiNumber;
        is.get();

        std::cout << "Input Marks: " << std::endl;
        std::cout << "1. Math: ";
        is >> temp.mathMark;
        is.get();
        std::cout << "2. English: ";
        is >> temp.englishMark;
        is.get();
        std::cout << "3. C++: ";
        is >> temp.cPlusMark;
        is.get();

        return is;
    }

    friend std::ostream& operator << (std::ostream& os, const Student& temp)
    {
        os << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        os << "Data student: \n" << temp.person << endl;
        os << "-------------------------------------------------------" << std::endl;
        os << "Name VNZ: " << temp.GetNameVnz() << std::endl;
        os << "Faculty: " << temp.GetFaculty() << std::endl;
        os << "Course: " << temp.GetCourse() << std::endl;
        os << "Group: " << temp.GetGroup() << std::endl;
        os << "Identifi Number: " << temp.GetID() << std::endl;
        os << "Marks: " << std::endl;
        os << "1. Math: " << temp.GetMath() << std::endl;
        os << "2. English: " << temp.GetEnglish() << std::endl;
        os << "3. C++: " << temp.GetCplus() << std::endl;
        os << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        return os;
    }

    virtual void Read();

    ~Student();
};

