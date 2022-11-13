#include "Human.h"

string Human::get_name() const
{
	return name;
}

void Human::set_name(string name)
{
	this->name = name;
}

string Human::get_surname() const
{
	return surname;
}

void Human::set_surname(string surname)
{
	this->surname = surname;
}

string Human::get_father_sname() const
{
	return fatherSname;
}

void Human::set_father_sname(string father_sname)
{
	fatherSname = father_sname;
}

string Human::get_phonenumber() const
{
	return phonenumber;
}

void Human::set_phonenumber(string phonenumber)
{
	this->phonenumber = phonenumber;
}

string Human::get_iv_id() const
{
	return IvID;
}

void Human::set_iv_id(string iv_id)
{
	IvID = iv_id;
}
