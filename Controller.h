#pragma once
#include <iostream>
#include "string"
#include "Owner.h"
#include "Contacts.h"
using namespace std;

class Controller {
private:
	int selectedMenuNum;
	int numOfContacts = 0;
	string name, phone, email, address, twitter;
	Owner owner;
	Contacts *pContacts = new Contacts[100];
public:
	void runMainMenu();		
	void manageOwnerInfo();
	void inputOwnerInfo();
	void outputOwnerInfo();
	void editOwnerInfo();
	void manageContactInfo();
	void addContactInfo();
	void outputContactInfo();
	void removeContactByIndex();
	void printContactInfoByIndex(int _index);
};

