#pragma once
#include <string>
#include "Human.h"
#include <vector>
#include <fstream>
using namespace std;

class Client : public Human
{
public:
	Client(const Client& other) //  Копіювання
		: Human(other),
		  isBanned(other.isBanned),
		  IBan(other.IBan),
		  moneyOnWalet(other.moneyOnWalet),
		  city(other.city),
		  additionalInfo(other.additionalInfo),
		  age(other.age),
		  street(other.street),
		  isBisnessman(other.isBisnessman)
	{
		cout << "copy constructor was called " << endl;
	}

	
	Client(string name, string surname, string father_sname, string phonenumber, string iv_id, bool is_banned,
	       string i_ban, int money_on_walet, string city, string additional_info, int age, string street,
	       bool is_bisnessman)
		: Human(move(name), move(surname), move(father_sname), move(phonenumber), move(iv_id)),
		  isBanned(is_banned),
		  IBan(move(i_ban)),
		  moneyOnWalet(money_on_walet),
		  city(move(city)),
		  additionalInfo(move(additional_info)),
		  age(age),
		  street(move(street)),
		  isBisnessman(is_bisnessman)
	{
		cout << "Client constructor" << endl;
	}
	~Client()
	{
		cout << "Client decostructor" << endl;
	}
private:
	bool isBanned;
public:
	bool is_is_banned();

	void set_is_banned(bool is_banned);

	string get_i_ban() const;

	void set_i_ban(string i_ban);

	int get_money_on_walet() const;

	void set_moneyonwalet(int money_on_walet);

	string get_city() const;

	void set_city(string city);

	string get_additional_info() const;

	void set_additional_info(string additional_info);

	int get_age();

	void set_age(int age);

	string get_street();

	void set_street(string street);

	bool isbisnessman();

	void set_isbisnessman(bool is_bisnessman);

	void WriteInfoToFile(string directory)// Запису у файл
	;

	void ReadFromFile(string directory, Client *client) // Читання з файлу
	;

private:
	string IBan;
	int moneyOnWalet;
	string city;
	string additionalInfo;

public:
	int age;
	string street;
	bool isBisnessman;



};