#include "Client.h"

bool Client::is_is_banned()
{
	return this->isBanned;
}

void Client::set_is_banned(bool is_banned)
{
	this->isBanned = is_banned;
}

string Client::get_i_ban() const
{
	return this->IBan;
}

void Client::set_i_ban(string i_ban)
{
	this->IBan = i_ban;
}

int Client::get_money_on_walet() const
{
	return this->moneyOnWalet;
}

void Client::set_moneyonwalet(int money_on_walet)
{
	this->moneyOnWalet = money_on_walet;
}

string Client::get_city() const
{
	return this->city;
}

void Client::set_city(string city)
{
	this->city = city;
}

string Client::get_additional_info() const
{
	return this->additionalInfo;
}

void Client::set_additional_info(string additional_info)
{
	this->additionalInfo = additional_info;
}

int Client::get_age()
{
	return this->age;
}

void Client::set_age(int age)
{
	this->age = age;
}

string Client::get_street()
{
	return this->street;
}

void Client::set_street(string street)
{
	this->street = street;
}

bool Client::isbisnessman()
{
	return this->isBisnessman;
}

void Client::set_isbisnessman(bool is_bisnessman)
{
	this->isBisnessman = is_bisnessman;
}

void Client::WriteInfoToFile(string directory)
{
	fstream writeStream(directory);

	if (!writeStream.is_open()) {
		cout << "failed to open file" << '\n';
	}
	else {
		writeStream << this->get_name() << this->get_surname() << this->get_age();
	}
}

void Client::ReadFromFile(string directory, Client* client)
{
	ifstream readStream(directory);
	string Rname;
	string Rsurname;
	int Rage;
	readStream >> Rname >> Rsurname >> Rage;
	this->set_name(Rname);
	this->set_surname(Rsurname);
	this->set_age(Rage);
}
