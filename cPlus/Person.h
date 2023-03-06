#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person
{
private:
    string name="NULL", data="00.00.0000", sex="--", number="--";

public:
    
    Person();
    Person(string name, string data, string sex, string number);
    Person(const Person& _P);

    void SetName(string NewName);
    void SetData(string NewData);
    void SetSex(string NewSex);
    void SetNumber(string NewNumber);

    string GetName() const;
    string GetData() const;
    string GetSex() const;
    string GetNumber() const;

    void operator () ( string OrigName, string OrigData, string OrigSex, string OrigNumber) {
        SetName(OrigName);
        SetData(OrigData);
        SetSex(OrigSex);
        SetNumber(OrigNumber);
    }
    void operator = (const Person& oPers)
    {
        name = oPers.name;
        data = oPers.data;
        sex = oPers.sex;
        number = oPers.number;
    }

    friend std::istream& operator >> (std::istream& is, Person& temp)
    {
        std::cout << "Input your name: ";
        is >> temp.name;
        is.get();

        std::cout << "Input your Data of Birth: ";
        is >> temp.data;
        is.get();

        std::cout << "Input your sex: ";
        is >> temp.sex;
        is.get();

        std::cout << "Input your Phone number: ";
        is >> temp.number;
        is.get();

        return is;
    }
    friend std::ostream& operator << (std::ostream& os, const Person temp)
    {
        os << "Name person: " << temp.GetName() << std::endl;
        os << "Data of Birth person: " << temp.GetData() << std::endl;
        os << "Sex of person: " << temp.GetSex() << std::endl;
        os << "Phone number of person: " << temp.GetNumber() << std::endl;
        return os;
    }

    virtual void Read();

    ~Person();
};

