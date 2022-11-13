#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Human
{
public:
	string info;
public:
	Human(string name, string surname, string father_sname, string phonenumber, string iv_id)
		: name(std::move(name)),
		  surname(std::move(surname)),
		  fatherSname(std::move(father_sname)),
		  phonenumber(std::move(phonenumber)),
		  IvID(std::move(iv_id))
	{
		cout << "Human constructor" << endl;
	}
	~Human()
	{
		cout << "Human Deconstructor" << endl;
	}

private:
	string name;
public:
	string get_name() const;

	void set_name(string name);

	string get_surname() const;

	void set_surname(string surname);

	string get_father_sname() const;

	void set_father_sname(string father_sname);

	string get_phonenumber() const;

	void set_phonenumber(string phonenumber);

	string get_iv_id() const;

	void set_iv_id(string iv_id);

private:
	string surname;
	string fatherSname;
	string phonenumber;
	string IvID;

};

