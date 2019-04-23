#include "Owner.h"

void Owner::setInfo(string name, string phone, string email, string address, string twitter) {
	m_name = name;
	m_phoneNumber = phone;
	m_email = email;
	m_address = address;
	m_twitterAccount = twitter;
}

void Owner::getInfo() {
	cout << "소유자 이름: " << m_name << endl;
	cout << "소유자 전화번호: " << m_phoneNumber << endl;
	cout << "소유자 이메일: " << m_email << endl;
	cout << "소유자 주소: " << m_address << endl;
	cout << "소유자 트위터 계정: " << m_twitterAccount << endl;
}

void Owner::editNameInfo(string name) {
	m_name = name;
}

void Owner::editPhoneNumberInfo(string phone) {
	m_phoneNumber = phone;
}

void Owner::editEmailInfo(string email) {
	m_email = email;
}

void Owner::editAddressInfo(string address) {
	m_address = address;
}

void Owner::editTwiterInfo(string twitterAccount) {
	m_twitterAccount = twitterAccount;
}