#pragma once
using namespace std;
#include <vector>
#include <fstream>
#include <iostream>
#include "Delivery.h"
#include <list>
class info_DATA_Base
{
	int id;
public:
	int get_id() const;

	void set_id(int id);

	explicit info_DATA_Base(int id)
		: id(id)
	{
		cout << "infoDb constructor" << endl;
	}
	~info_DATA_Base()
	{
		cout << "infoDB deconstructor" << endl;
	}

	// Віртуальні функції
	virtual void write_infoToDAtabase(string textlink) = 0;
	virtual void getInfoFromDataBase(string textlink) = 0;
};

class Delivery_Truck : public info_DATA_Base
{
public:
	string nameoftheCar;
	string carAdress;
	int howmanyDelivery;

	Delivery_Truck(int id, string nameofthe_car, string car_adress, int howmany_delivery, bool isable,
		string in_whatcity_car, list<Delivery> what_delivery_onthat_tru_ck)
		: info_DATA_Base(id),
		  nameoftheCar(nameofthe_car),
		  carAdress(car_adress),
		  howmanyDelivery(howmany_delivery),
		  isable(isable),
		  inWhatcityCar(in_whatcity_car),
		  whatDeliveryOnthatTRUCk(what_delivery_onthat_tru_ck)
	{
	}

	bool is_isable() ;

	void set_isable(bool isable);

	string get_in_whatcity_car() ; 

	void set_in_whatcity_car(string in_whatcity_car);

	list<Delivery> get_what_delivery_onthat_tru_ck() ;

	void set_what_delivery_onthat_tru_ck(list<Delivery> what_delivery_onthat_tru_ck);

	void PushDelivery(Delivery *delivR);

	void giveOrder()// видалення посилок з кузова машини
	;
	void write_infoToDAtabase(string textlink) override;

	void getInfoFromDataBase(string textlink) override;
private:
	bool isable;// чи вільна
	string inWhatcityCar;
	list<Delivery> whatDeliveryOnthatTRUCk;
	
};


class CarDelivery: public info_DATA_Base
{
public:
	CarDelivery(int id, string car_adress, string fromcity, bool isable, int price, string inwhat_citynow,
		string ownername, string ibank, int salary_forthisfop, list<Delivery> what_delivery_onthat_tru_ck)
		: info_DATA_Base(id),
		  carAdress(car_adress),
		  fromcity(fromcity),
		  isable(isable),
		  price(price),
		  InwhatCitynow(inwhat_citynow),
		  ownername(ownername),
		  ibank(ibank),
		  salaryForthisfop(salary_forthisfop),
		  whatDeliveryOnthatTRUCk(what_delivery_onthat_tru_ck)
	{
	}

	string get_inwhat_citynow() const;

	void set_inwhat_citynow(string inwhat_citynow);

	string get_ownername() const;

	void set_ownername(string ownername);

	string get_ibank() const;

	void set_ibank(string ibank);

	int get_salary_forthisfop() const;

	void set_salary_forthisfop(int salary_forthisfop);

	string carAdress;
	string fromcity;
	bool isable;
	int price;

	void write_infoToDAtabase(string textlink) override;
	void getInfoFromDataBase(string textlink) override;
	void PushDelivery(Delivery* delivR);
	void giveOrder();


private:
	string InwhatCitynow;
	string ownername;
	string ibank;
	int salaryForthisfop;
	list<Delivery> whatDeliveryOnthatTRUCk;
	
};

class PersonalDelivery:public info_DATA_Base
{public:
	string name;
	string price;
	string priceFOrdelivery;

	PersonalDelivery(int id, string name, string price, string price_f_ordelivery)
		: info_DATA_Base(id),
		  name(name),
		  price(price),
		  priceFOrdelivery(price_f_ordelivery)
	{
	}

	void write_infoToDAtabase(string textlink) override;

	void getInfoFromDataBase(string textlink) override;
};