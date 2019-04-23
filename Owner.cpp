#include "Owner.h"

void Owner::setInfo(string name, string phone, string email, string address, string twitter) {
	m_name = name;
	m_phoneNumber = phone;
	m_email = email;
	m_address = address;
	m_twitterAccount = twitter;
}

void Owner::getInfo() {
	cout << "������ �̸�: " << m_name << endl;
	cout << "������ ��ȭ��ȣ: " << m_phoneNumber << endl;
	cout << "������ �̸���: " << m_email << endl;
	cout << "������ �ּ�: " << m_address << endl;
	cout << "������ Ʈ���� ����: " << m_twitterAccount << endl;
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