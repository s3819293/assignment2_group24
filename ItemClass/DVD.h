#pragma once

#include <stdio.h>
#include "Item.h"

using namespace std;

class DVD: public Item
{
protected:
    string genre;
public:
    // Constructor
    DVD();
    DVD(string id, string title, string rentalType, string loanType, int noOfCopy, double fee, string genre);
    
    // Destructor
    ~DVD();
    
    // Getter
    string getGenre();
    
    // Setter
    void setGenre(string genre);
    
    // Other functions
    void print();
    string toString();
};