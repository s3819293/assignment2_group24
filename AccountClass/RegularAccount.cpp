#include "RegularAccount.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Constructor
RegularAccount::RegularAccount() :Account() {

}
RegularAccount::RegularAccount(string id, string name, string address, string phone, int noOfRentals, string type) :
	Account(id, name, address, phone, noOfRentals, type) {
	this->totalReturnItem = 0;
}
RegularAccount::RegularAccount(Account* account) {
	//constructor used when promoting an account
	this->setId(account->getId());
	this->setName(account->getName());
	this->setAddress(account->getAddress());
	this->setPhone(account->getPhone());
	this->setNoOfRentals(account->getNoOfRentals());
	this->setType("Regular");
	this->totalReturnItem = 0;
}

//Getter
int RegularAccount::getTotalReturnItem() {
	return this->totalReturnItem;
}

//Setter
void RegularAccount::setTotalReturnItem(int totalReturnItem) {
	this->totalReturnItem = totalReturnItem;
}

//Other function
bool RegularAccount::promoteable() {
	if (this->getTotalReturnItem() >= 3) {
		cout << "You have meet the requirement to promote into VIP Account"<< endl;
		return true;
	}
	cout << "You have not meet the requirement to promote your account" << endl;
	return false;
}
void RegularAccount::addRentalList(string id) {
	this->listOfRentals.push_back(id);

	this->setNoOfRentals(this->listOfRentals.size());
}

bool RegularAccount::returnItem(string id, ItemManager* itemList) 
{
	int pos = 0;
	bool Itemrented = false;
	if (this->listOfRentals.empty())
	{
		cerr << " You have not rented any item(s) " << endl;
	}
	else{
		Itemrented = true;
		if (Itemrented)
		{
		for (string itemID : this->listOfRentals)
		{
				if (itemID == id) 
				{
					if (itemList->returnItem(itemID) == true) 
					{
						this->setNoOfRentals(this->getNoOfRentals() - 1);
						this->listOfRentals.erase(this->listOfRentals.begin() + pos);
						cout << " Item returned " << endl;
						return true;
					}
				}
				else {
					pos++;
				}
			}
		}
	}
	return false;
}
//
void RegularAccount::print() {
	cout << this->getId() << " " << this->getName() << " " << this->getAddress() << " " << this->getPhone() << " " << this->getNoOfRentals() << " " << this->getType() << endl;
}

string RegularAccount::toString() {
	string toDB = this->getId() + "," + this->getName() + "," + this->getAddress() + "," + this->getPhone() + "," + to_string(this->getNoOfRentals()) + "," + this->getType();
	return toDB;
}