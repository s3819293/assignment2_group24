#include <iostream>
#include <string>
#include <vector>

#include "../ItemManager.h"

class Account
{
private:
	string id;
	string name;
	string address;
	string phone;
	int noOfRentals;

protected:
	vector<string> listOfRentals;

public:
	//Constructor
	Account();
	Account(string id, string name, string address, string phone, int noOfRentals);
	
	//Destructor
	~Account() {};

	//Getter
	string getId();
	string getName();
	string getAddress();
	string getPhone();
	int getNoOfRentals();
	vector<string> getListOfRentals();

	//Setter
	void setId(string id);
	void setName(string name);
	void setAddress(string address);
	void setPhone(string phone);
	void setNoOfRentals(int noOfRentals);
	void setListOfRentals(vector<string>& listOfRentals);

	//Other function
	bool rentItem(string id);
	bool returnItem(string id);
	void addRentalList(string item);
	
	//
	void print();
	string toString();
};

