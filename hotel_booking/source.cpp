#include "student.h"
student::student()
{
	ID = "0";
	Name = "None";
	English = 0;
	Math = 0;
	IT = 0;
}
student::student(string id, string name, double engl, double math, double it)
{
	setID(id);
	setName(name);
	setEnglish(engl);
	setMath(math);
	setIT(it);
}
void student::setID(string id)
{
	ID = id;
}
string student::getID()
{
	return ID;
}
void student::setName(string name)
{
	Name = name;
}
string student::getName()
{
	return Name;
}
void student::setEnglish(double engl)
{
	English = engl;
}
double student::getEnglish()
{
	return English;
}
void student::setMath(double math)
{
	Math = math;
}
double student::getMath()
{
	return Math;
}
void student::setIT(double it)
{
	IT = it;
}
double student::getIT()
{
	return IT;
}
double student::getTotal()
{
	double qw = (Math + IT + English) / 3;
	return qw;
}
string student::getGrade()
{
	double qw = getTotal();
	if (qw > 90) {
		return "A+";
	}
	else if (qw <= 89 && qw >= 85) {
		return "A0";
	}
	else if (qw <= 84 && qw >= 80) {
		return "B+";
	}
	else if (qw <= 79 && qw >= 75) {
		return "B0";
	}
	else if (qw <= 74 && qw >= 70) {
		return "C+";
	}
	else if (qw <= 69 && qw >= 65) {
		return "C0";
	}
	else if (qw <= 64 && qw >= 59) {
		return "D+";
	}
	else if (qw <= 54 && qw >= 49) {
		return "D0";
	}
	else if (qw <= 48 && qw >= 0) {
		return "F";
	}
	return "invalid grade";
}
void student::displaymassage()
{

	cout << "Your Name is - " << getName() << endl;
	cout << "Your Student ID is: " << getID() << endl;
	cout << "Your score for English is: " << getEnglish() << endl;
	cout << "Your score for Mathematics is: " << getMath() << endl;
	cout << "Your score for IT is: " << getIT() << endl;
	cout << "Your total grade is: " << getTotal() << endl;
	cout << "Your overall grade is:  " << getGrade() << endl;

}
