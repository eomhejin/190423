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
	cout << "연락처 이름: " << m_name << endl;
	cout << "연락처 전화번호: " << m_phoneNumber << endl;
	cout << "연락처 이메일: " << m_email << endl;
	cout << "연락처 주소: " << m_address << endl;
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