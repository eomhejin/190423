#include "Contacts.h"


void Contacts::setInfo(string name, string phone, string email, string address) {
	m_name = name;
	m_phoneNumber = phone;
	m_email = email;
	m_address = address;
}

void Contacts::getInfo() {
	cout << m_name << endl;
}

void Contacts::getFullInfo() {
	cout << "����ó �̸�: " << m_name << endl;
	cout << "����ó ��ȭ��ȣ: " << m_phoneNumber << endl;
	cout << "����ó �̸���: " << m_email << endl;
	cout << "����ó �ּ�: " << m_address << endl;
}

void Contacts::editNameInfo(string name) {
	m_name = name;
}
void Contacts::editPhoneNumberInfo(string phone) {
	m_phoneNumber = phone;
}
void Contacts::editEmailInfo(string email) {
	m_email = email;
}
void Contacts::editAddressInfo(string address) {
	m_address = address;
}