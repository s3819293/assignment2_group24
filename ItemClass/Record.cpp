#include "Record.h"

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Record::Record() {

}
Record::Record(string id, string title, string rentalType, string loanType, int noOfCopy, double fee, string genre) :
	Item(id, title, rentalType, loanType, noOfCopy, fee) {
	this->genre = genre;
}

//Getter
string Record::getGenre() {
	return this->genre;
}

//Setter
void Record::setGenre(string genre) {
	this->genre = genre;
}

//Other function
void Record::print() {
	cout << this->getId() << " : " << this->getTitle() << " - " << this->getRentalType() << " - " << this->getLoanType() << " - " << this->getNoOfCopy() << " - " << this->getFee() << " - " << this->getGenre() << endl;
}
string Record::toString() {
	string toDB = this->getId() + "," + this->getTitle() + "," + this->getRentalType() + "," + this->getLoanType() + "," + to_string(this->getNoOfCopy()) + "," + to_string(this->getFee()) + "," + this->getGenre();
	return toDB;
}