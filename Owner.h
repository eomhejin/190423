#include <iostream>
#include "Person.h"
#pragma once

// 소유자 정보 관리 
class Owner : public Person {
private:
	string m_twitterAccount; // 트위터 계정
public:
	void setInfo(string name, string phone, string email, string address, string twitter);
	void getInfo();
	void editNameInfo(string name);
	void editPhoneNumberInfo(string phone);
	void editEmailInfo(string email);
	void editAddressInfo(string address);
	void editTwiterInfo(string twitterAccount);
};