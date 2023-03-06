#include <iostream>
#include<array> 
#include <fstream>
#include "Person.h"
using namespace std;
Person::Person() { }
Person::Person(string name, string data, string sex, string number)
	: name(name), data(data), sex(sex), number(number)
{ }
Person::Person(const Person& _P)
	: name(_P.name),data(_P.data),sex(_P.sex),number(_P.number) { }

void Person::SetName(string NewName) { name = NewName; }
void Person::SetData(string NewData) { data = NewData; }
void Person::SetSex(string NewSex) { sex = NewSex; }
void Person::SetNumber(string NewNumber) { number = NewNumber; }

string Person::GetName() const { return name; }
string Person::GetData() const { return data; }
string Person::GetSex() const { return sex; }
string Person::GetNumber() const { return number; }

void Person::Read()
{
	cout << "Data birthday Person: " << GetData() << endl;
}

Person::~Person(){ }