#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Client.h"
using namespace std;
class Delivery
{
public:
	Delivery(string name, string city_from, string city_too, int weight, int price, int price_fordelivery, string id)
		: name(std::move(name)),
		  cityFrom(std::move(city_from)),
		  cityToo(std::move(city_too)),
		  weight(weight),
		  price(price),
		  priceFordelivery(price_fordelivery),
		  id(std::move(id))
	{
		this->ClientGet = false;
		this->client_belongs = nullptr;
	}

private:
	string name;
public:
	string nameget();
	void set_name(string name);
	string city_from();
	void set_city_from(string city_from);
	string city_too();
	void set_city_too(string city_too);
	int weight1();
	void set_weight(int weight);
	int price1();
	void set_price(int price);
	int price_fordelivery();
	void set_price_fordelivery(int price_fordelivery);
	string id1();
	void set_id(string id);
	bool client_get();
	void set_client_get(bool client_get);
	Client* client_belongs1();
	void set_client_belongs(Client* client_belongs);
	string description1();
	void set_description(string description);

private:
	string cityFrom;
	string cityToo;
	int weight;
	int price;
	int priceFordelivery;

protected:
	string id;
	bool ClientGet;
	Client* client_belongs;
public:
	string description;
	
};

class Employee;
class Office
{
public:
	string city1() ;
	void set_city(string city);
	string adress1();
	void set_adress(string adress);
	bool isopen() const;
	void set_isopen(bool isopen);
	string start_work_at();
	void set_start_work_at(string start_work_at);
	string end_work_at();
	void set_end_work_at(string end_work_at);
	int number1() const;
	void set_number(int number);
	Office(string city, string adress, bool isopen, string start_work_at, string end_work_at, int number, string info,
	       int rank)
		: city(std::move(city)),
		  adress(std::move(adress)),
		  Isopen(isopen),
		  startWorkAt(std::move(start_work_at)),
		  EndWorkAt(std::move(end_work_at)),
		  number(number),
		  info(std::move(info)),
		  rank(rank)
	{
		cout << "Office Constructor " << endl;
	}
	~Office()
	{
		cout << "office deconstructor" << endl;
	}
private:
	string city;
	string adress;
	bool Isopen;
	string startWorkAt;
	string EndWorkAt;
	int number;
	vector<Employee> employees;
public:

	void set_employees(Employee* employees);

	string info;
	int rank;
	

};



class City
{
public:
	City(bool is_megapolis, string name, int amount_of_office)
		: isMegapolis(is_megapolis),
		  name(std::move(name)),
		  amountOfOffice(amount_of_office)
	{
		cout << "City constructor" << endl;

	}
	~City()
	{
		cout << "City Deconstructor" << endl;
	}

private:
	bool isMegapolis;
public:
	bool is_megapolis();
	void set_is_megapolis(bool is_megapolis);
	string name1();
	void set_name(string name);
	int amount_of_office();
	void set_amount_of_office(int amount_of_office);
	void AddOffice(string city , string adress , bool isopen , string start ,string end , int number , string information , int ranking);
	void RemoveOfficFromThelist(string city);
private:
	string name;
	int amountOfOffice;
	vector<Office> OfficeList;
public:
	string InfoAboutCity;
	bool everythingOK = true;
	int rank;
};



class Duty
{
public:
	Duty(string responosobility, string information)
		: responosobility(std::move(responosobility)),
		  information(std::move(information))
	{
		cout << "duty Constructor" << endl;
	}

	~Duty()
	{
		cout << "duty deconstructor" << endl;
	}

private:
	string responosobility;
public:
	string get_responosobility();

	void set_responosobility(string responosobility);

	string get_information();

	void set_information(string information);

private:
	string information;
protected:
	static void CheckDerivery(Delivery * delivery);

	void userGetDelivery(Delivery *delivery);
};
class Position
{
public:
	Position(string position, string what_doudo, int salary, int weekends, bool is_ensuranse)
		: position(std::move(position)),
		  whatDoudo(std::move(what_doudo)),
		  salary(salary),
		  Weekends(weekends),
		  isEnsuranse(is_ensuranse)
	{
		cout << "Pos constr" << endl;
	}

	~Position()
	{
		cout << "Pos deconstr" << endl;
	}
private:
	string position;
public:
	string get_position();
	void set_position(string position);
	string get_what_doudo();
	void set_what_doudo(string what_doudo);
	int get_salary();
	void set_salary(int salary);
	int get_weekends();
	void set_weekends(int weekends);
	bool is_is_ensuranse();
	void set_is_ensuranse(bool is_ensuranse);

private:
	string whatDoudo;
	int salary;
	int Weekends;
	bool isEnsuranse;

};
class Employee : public Human ,protected Duty // Наслідування  
{
public:
	Employee(string name, string surname, string father_sname, string phonenumber, string iv_id, string responosobility,
		string information, int working_time_day, Position* position)
		: Human(std::move(name), std::move(surname), std::move(father_sname), std::move(phonenumber), std::move(iv_id)),
		  Duty(std::move(responosobility), std::move(information)),
		  workingTimeDay(working_time_day),
		  position(position)
	{
		cout << "Employe constructor" << endl;
	}
	~Employee()
	{
		cout << "employee deconstructor" << endl;
	}
private:
	int workingTimeDay;
	Position *position;


};