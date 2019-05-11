#include <iostream>
#include <vector>

using namespace std;


class Appointment
{
public:
	Appointment();
	Appointment(int d, int m, int y);

private:
	int day;
	int month;
	int year;

};

Appointment::Appointment()
{

}

Appointment::Appointment(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

class OneTime : public Appointment
{
public:

private:

};
class Daily : public Appointment
{
public:

private:

};
class Weekly : public Appointment
{
public:

private:

};
class Monthly : public Appointment
{
public:

private:

};


