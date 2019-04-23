#pragma once
#include <iostream>
#include "string"
using namespace std;

class Person {
protected:
	string m_name;           // �̸�
	string m_phoneNumber;    // ��ȭ��ȣ
	string m_email;          // �̸���
	string m_address;        // �ּ�
public:
	virtual void setInfo(string name, string phone, string email, string address) {}
	virtual void getInfo() {}
	virtual void editNameInfo(string name) {}
	virtual void editPhoneNumberInfo(string phone) {}
	virtual void editEmailInfo(string email) {}
	virtual void editAddressInfo(string address) {}
};