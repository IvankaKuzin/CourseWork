#include "Student.h"

Student::Student() { }

Student::Student(string nameVNZ, string faculty, int course, string group, int identifiNumber, int mathMark, int englishMark, int cPlusMark):
	nameVNZ(nameVNZ), faculty(faculty), course(course), group(group), identifiNumber(identifiNumber), mathMark(mathMark), englishMark(englishMark), cPlusMark(cPlusMark)
{ }

Student::Student(string name, string data, string sex, string number,
	string nameVNZ, string faculty, int course, string group, int identifiNumber, int mathMark, int englishMark, int cPlusMark) : 
	Person(name, data, sex, number),
nameVNZ(nameVNZ), faculty(faculty), course(course), group(group), identifiNumber(identifiNumber),mathMark(mathMark), englishMark(englishMark), cPlusMark(cPlusMark)
{ }

void Student::SetNameVnz(string Vnz) { nameVNZ = Vnz; }
void Student::SetFaculty(string Faculty) { faculty = Faculty; }
void Student::SetCourse(int Course) { course = Course; }
void Student::SetGroup(string Group) { group = Group; }
void Student::SetID(int Id) { identifiNumber = Id; }
void Student::SetMark(int Math, int English, int cPlus)
{
	mathMark = Math;
	englishMark = English;
	cPlusMark = cPlus;
}

string Student::GetNameVnz() const { return nameVNZ; }
string Student::GetFaculty() const { return faculty; }
int Student::GetCourse() const { return course; }
string Student::GetGroup() const { return group; }
int Student::GetID() const { return identifiNumber; }
int Student::GetMath() const { return mathMark; }
int Student::GetEnglish() const { return englishMark; }
int Student::GetCplus() const { return cPlusMark; }
	
void Student::Read()
{
	cout << "ID student: " << GetID() << endl;
}

Student::~Student() { }