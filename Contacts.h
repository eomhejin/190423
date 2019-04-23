#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

// 연락처 정보 관리
class Contacts : public Person {
public:
	Contacts() {}
	void setInfo(string name, string phone, string email, string address);
	void getInfo();
	void getFullInfo();
	void editNameInfo(string name);
	void editPhoneNumberInfo(string phone);
	void editEmailInfo(string email);
	void editAddressInfo(string address);
};
