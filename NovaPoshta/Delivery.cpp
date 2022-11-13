#include "Delivery.h"
#include "algorithm"
string Delivery::nameget()
{
	return name;
}

void Delivery::set_name(string name)
{
	this->name = name;
}

string Delivery::city_from()
{
	return cityFrom;
}

void Delivery::set_city_from(string city_from)
{
	cityFrom = city_from;
}

string Delivery::city_too()
{
	return cityToo;
}

void Delivery::set_city_too(string city_too)
{
	cityToo = city_too;
}

int Delivery::weight1()
{
	return weight;
}

void Delivery::set_weight(int weight)
{
	this->weight = weight;
}

int Delivery::price1()
{
	return price;
}

void Delivery::set_price(int price)
{
	this->price = price;
}

int Delivery::price_fordelivery()
{
	return priceFordelivery;
}

void Delivery::set_price_fordelivery(int price_fordelivery)
{
	priceFordelivery = price_fordelivery;
}

string Delivery::id1()
{
	return id;
}

void Delivery::set_id(string id)
{
	this->id = id;
}

bool Delivery::client_get()
{
	return ClientGet;
}

void Delivery::set_client_get(bool client_get)
{
	ClientGet = client_get;
}

Client* Delivery::client_belongs1()
{
	return client_belongs;
}

void Delivery::set_client_belongs(Client* client_belongs)
{
	this->client_belongs = client_belongs;
}

string Delivery::description1()
{
	return description;
}

void Delivery::set_description(string description)
{
	this->description = description;
}

string Office::city1() 
{
	return city;
}

void Office::set_city(string city)
{
	this->city = city;
}

string Office::adress1()
{
	return adress;
}

void Office::set_adress(string adress)
{
	this->adress = adress;
}

bool Office::isopen() const
{
	return Isopen;
}

void Office::set_isopen(bool isopen)
{
	Isopen = isopen;
}

string Office::start_work_at()
{
	return startWorkAt;
}

void Office::set_start_work_at(string start_work_at)
{
	startWorkAt = start_work_at;
}

string Office::end_work_at()
{
	return EndWorkAt;
}

void Office::set_end_work_at(string end_work_at)
{
	EndWorkAt = end_work_at;
}

int Office::number1() const
{
	return number;
}

void Office::set_number(int number)
{
	this->number = number;
}

void Office::set_employees(Employee* employees)
{
	this->employees.push_back(*employees);
}

bool City::is_megapolis()
{
	return isMegapolis;
}

void City::set_is_megapolis(bool is_megapolis)
{
	isMegapolis = is_megapolis;
}

string City::name1()
{
	return name;
}

void City::set_name(string name)
{
	this->name = name;
}

int City::amount_of_office()
{
	return amountOfOffice;
}

void City::set_amount_of_office(int amount_of_office)
{
	amountOfOffice = amount_of_office;
}

void City::AddOffice(string city, string adress, bool isopen, string start, string end, int number, string information,int ranking)
{
	Office* myoffice = new Office(city, adress, isopen, start, end, number, information, ranking);
	this->OfficeList.push_back(*myoffice);
}

void City::RemoveOfficFromThelist(string city)
{
	for( int i = 0 ; i< OfficeList.size() ; i++)
	{
		if(OfficeList[i].city1()==city)
		{
			try
			{
				/*OfficeList.erase(remove(OfficeList.begin(), OfficeList.end(), OfficeList[i]),OfficeList.end());*/
			}
			catch (errc)
			{
				
			}
			
		}
	}
}

string Duty::get_responosobility()
{
	return responosobility;
}

void Duty::set_responosobility(string responosobility)
{
	this->responosobility = responosobility;
}

string Duty::get_information()
{
	return information;
}

void Duty::set_information(string information)
{
	this->information = information;
}

void Duty::CheckDerivery(Delivery* delivery)
{
	if(delivery->client_get()==false)
	{
		cout << delivery->nameget() << " Прямує до клієнта " << delivery->client_belongs1()->get_name() << " У місто" << delivery->city_too() << endl;
	}
}

void Duty::userGetDelivery(Delivery* delivery)
{
	if(delivery->client_get()==true)
	{
		delete(delivery);
		cout << "user get delivery" << endl;
	}
}



string Position::get_position()
{
	return position;
}

void Position::set_position(string position)
{
	this->position = position;
}

string Position::get_what_doudo()
{
	return whatDoudo;
}

void Position::set_what_doudo(string what_doudo)
{
	whatDoudo = what_doudo;
}

int Position::get_salary()
{
	return salary;
}

void Position::set_salary(int salary)
{
	this->salary = salary;
}

int Position::get_weekends()
{
	return Weekends;
}

void Position::set_weekends(int weekends)
{
	Weekends = weekends;
}

bool Position::is_is_ensuranse()
{
	return isEnsuranse;
}

void Position::set_is_ensuranse(bool is_ensuranse)
{
	isEnsuranse = is_ensuranse;
}
