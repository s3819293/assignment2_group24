#pragma once

#include <stdio.h>
#include "Item.h"

using namespace std;

class Record: public Item
{
protected:
    string genre;
public:
    // Constructor
    Record();
    Record(string id, string title, string rentalType, string loanType, int noOfCopy, double fee, string genre);
    
    // Destructor
    ~Record();
    
    // Getter
    string getGenre();
    
    // Setter
    void setGenre(string genre);
    
    // Other functions
    void print();
    string toString();
};