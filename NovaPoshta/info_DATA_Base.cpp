#include "info_DATA_Base.h"

int info_DATA_Base::get_id() const
{
	return id;
}

void info_DATA_Base::set_id(int id)
{
	this->id = id;
}

bool Delivery_Truck::is_isable() 
{
	return isable;
}

void Delivery_Truck::set_isable(bool isable)
{
	this->isable = isable;
}

string Delivery_Truck::get_in_whatcity_car() 
{
	return inWhatcityCar;
}

void Delivery_Truck::set_in_whatcity_car(string in_whatcity_car)
{
	inWhatcityCar = in_whatcity_car;
}

list<Delivery> Delivery_Truck::get_what_delivery_onthat_tru_ck() 
{
	return whatDeliveryOnthatTRUCk;
}

void Delivery_Truck::set_what_delivery_onthat_tru_ck(list<Delivery> what_delivery_onthat_tru_ck)
{
	whatDeliveryOnthatTRUCk = what_delivery_onthat_tru_ck;
}

void Delivery_Truck::PushDelivery(Delivery* delivR)
{
	this->whatDeliveryOnthatTRUCk.push_back(*delivR);
}

void Delivery_Truck::giveOrder()
{
	for (auto l : whatDeliveryOnthatTRUCk)
	{
		if (l.city_from()==this->inWhatcityCar)
		{
			l.set_client_get(true);
			/*whatDeliveryOnthatTRUCk.remove(l);*/
		}
	}
}

void Delivery_Truck::write_infoToDAtabase(string textlink)
{
	try
	{
		ofstream wrStream(this->nameoftheCar+".txt");
		wrStream << this->carAdress <<"\n" << this->howmanyDelivery << "\n" << this->nameoftheCar << "\n" << this->get_in_whatcity_car();
	}
	catch (...)
	{
		cout << "error with delivery" << endl;
	}
		
}

void Delivery_Truck::getInfoFromDataBase(string textlink)
{

	try
	{
		string city;
		ifstream wrStream(this->nameoftheCar + ".txt");
		wrStream >> this->carAdress  >> this->howmanyDelivery >> this->nameoftheCar >> city;
		this->set_in_whatcity_car(city);
	}
	catch (...)
	{
		cout << "error with delivery" << endl;
	}
		
}

string CarDelivery::get_inwhat_citynow() const
{
	return InwhatCitynow;
}

void CarDelivery::set_inwhat_citynow(string inwhat_citynow)
{
	InwhatCitynow = inwhat_citynow;
}

string CarDelivery::get_ownername() const
{
	return ownername;
}

void CarDelivery::set_ownername(string ownername)
{
	this->ownername = ownername;
}

string CarDelivery::get_ibank() const
{
	return ibank;
}

void CarDelivery::set_ibank(string ibank)
{
	this->ibank = ibank;
}

int CarDelivery::get_salary_forthisfop() const
{
	return salaryForthisfop;
}

void CarDelivery::set_salary_forthisfop(int salary_forthisfop)
{
	salaryForthisfop = salary_forthisfop;
}

void CarDelivery::write_infoToDAtabase(string textlink)
{
	try
	{
		ofstream wrStream(this->ownername + ".txt");
		wrStream << this->carAdress << "\n" << this->fromcity << "\n" << this->price << "\n" << this->get_ibank();
	}
	catch (...)
	{
		cout << "error with delivery" << endl;
	}

}

void CarDelivery::getInfoFromDataBase(string textlink)
{

	try
	{
		string ibankK;
		ifstream wrStream(this->ownername + ".txt");
		wrStream >> this->carAdress >> this->fromcity >> this->price >> ibankK;
		this->set_ibank(ibankK);
			
	}
	catch (...)
	{
		cout << "error with delivery" << endl;
	}

}

void CarDelivery::PushDelivery(Delivery* delivR)
{
	this->whatDeliveryOnthatTRUCk.push_back(*delivR);
}

void CarDelivery::giveOrder()
{
	for (auto l : whatDeliveryOnthatTRUCk)
	{
		if (l.city_from() == this->get_inwhat_citynow())
		{
			l.set_client_get(true);
			/*whatDeliveryOnthatTRUCk.remove(l);*/
		}
	}
}

void PersonalDelivery::write_infoToDAtabase(string textlink)
{
	ofstream wr(textlink);
	wr << "\n" << this->name << "\n" << this->price << "\n" << this->priceFOrdelivery << "\n";
}

void PersonalDelivery::getInfoFromDataBase(string textlink)
{
	ifstream wr(textlink);
	wr >>  this->name >> this->price >>this->priceFOrdelivery ;
}
