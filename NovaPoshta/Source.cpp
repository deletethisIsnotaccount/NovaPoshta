#include <Windows.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_set>

#include "Human.h"
#include "Client.h"
#include "Delivery.h"
#include "info_DATA_Base.h"
using namespace std;

int Intfunc(Client * client)
{
	return client->get_money_on_walet() + client->get_age();
}
int main ()
{
	
	Client client = { "Pavlo", "Bilag", "Olegovich","+380237272","OYTCCTYI",false , "UIOYGUDSUID2487782GYU",1000,"Kmelnytskiy"," ",18,"Mury",false };
	Delivery delivery("Staffdelivery", "Kyiv", "Kmelnytskiy", 1, 500, 67, "5UI7665SF");
	
	Client simon(client);// Конструктор Копіювання 
	client.WriteInfoToFile("info.txt");
	client.ReadFromFile("info.txt", &simon);

	delivery.set_client_belongs(&simon); // Асоціація
	City Kmelnytskiy = { false,"Kmelnytskiy",4 };
	Kmelnytskiy.AddOffice("Kmelnytskiy", "Panasa Murnogo", true, "9:00", "16:00", 1,"",4);
	Employee employee = { "Ilusha","Koval","Koval","+38072323254","UBYYUVUV778788B"," "," ",8,new Position("Admin"," ",1000,22,false) };
	/*cout << client.get_age();*/

	vector<Client> array= { client ,client ,simon,simon,client}; // Масив Об'єктів

	list<Delivery> posulkalist;
	Delivery_Truck mytrucl_truck(1,"Truck1","Kherson",20,true,"Khmelnytskyi", posulkalist);
	CarDelivery mycar(1, "Khmelnytskyi", "Khmelnytskyi", true, 55, "Kherson", "Pavlo", "UAVUSUUACT7876", 10000, posulkalist);
	PersonalDelivery mypersonaldelivery(1, "pavlo", "usual", "523");
	


	info_DATA_Base* p=&mytrucl_truck;//поліморфізм
	info_DATA_Base* p2 = &mycar;
	info_DATA_Base* p3 = &mytrucl_truck;
	p->write_infoToDAtabase("somedb");
	p2->write_infoToDAtabase("somedb");
	p3->write_infoToDAtabase("user");
	p->getInfoFromDataBase("somedb");
	p2->getInfoFromDataBase("user.txt");
	p3->getInfoFromDataBase("user.txt");// поліморфізм

	// перевантажені оператори
	Delivery_Truck operatortruck(1, "", "", 0, false, "", posulkalist);

	operatortruck +mytrucl_truck;  // - або + змінює тру або фолс isable
	operatortruck - mytrucl_truck;
	operatortruck= mytrucl_truck;
	bool b = operatortruck == mytrucl_truck; //чи рівні;
	cout << b;

	// stl

	// initialize a set of int type
	set<int> numbers = { 1, 100, 10, 70, 100 };

	// print the set
	cout << "Numbers are: ";
	for (auto& num : numbers) {
		cout << num << ", ";
	}
	// initialize a vector of int type
		vector<int> n = { 1, 100, 10, 70, 100 };

	// print the vector
	cout << "Numbers are: ";
	for (auto& num : n) {
		cout << num << ", ";
	}

	unordered_set<int> na = { 1, 100, 10, 70, 100 };

	// print the set
	cout << "Numbers are: ";
	for (auto& num : na) {
		cout << num << ", ";
	}


	return 0;
}