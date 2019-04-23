#pragma once
#include <iostream>
#include "string"
using namespace std;

class Person {
protected:
	string m_name;           // 이름
	string m_phoneNumber;    // 전화번호
	string m_email;          // 이메일
	string m_address;        // 주소
public:
	virtual void setInfo(string name, string phone, string email, string address) {}
	virtual void getInfo() {}
	virtual void editNameInfo(string name) {}
	virtual void editPhoneNumberInfo(string phone) {}
	virtual void editEmailInfo(string email) {}
	virtual void editAddressInfo(string address) {}
};