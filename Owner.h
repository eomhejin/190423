#include <iostream>
#include "Person.h"
#pragma once

// ������ ���� ���� 
class Owner : public Person {
private:
	string m_twitterAccount; // Ʈ���� ����
public:
	void setInfo(string name, string phone, string email, string address, string twitter);
	void getInfo();
	void editNameInfo(string name);
	void editPhoneNumberInfo(string phone);
	void editEmailInfo(string email);
	void editAddressInfo(string address);
	void editTwiterInfo(string twitterAccount);
};