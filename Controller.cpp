#include "Controller.h"

void Controller::runMainMenu() {
	do {
		cout << "1. ������ ���� ���" << endl;
		cout << "2. ����ó ���� ���" << endl;
		cout << "3. ���α׷� ����" << endl;
		cin >> selectedMenuNum;

		switch (selectedMenuNum) {
		case 1:
			manageOwnerInfo();
			break;
		case 2:
			manageContactInfo();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}
	} while (selectedMenuNum != 3);
}

void Controller::manageOwnerInfo() {
	int selectedNum;
	do {
		cout << "1. ������ ���� �Է�" << endl;
		cout << "2. ������ ���� ��ȸ" << endl;
		cout << "3. ������ ���� ����" << endl;
		cout << "4. ���� ȭ��" << endl;
		cin >> selectedNum;

		switch (selectedNum) {
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			outputOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;
		case 4:
			cout << "���� ȭ������ ���ư��ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է��߽��ϴ�. �ٽ� ���ּ���." << endl;
		}
	} while (selectedNum != 4);
}

void Controller::inputOwnerInfo() {
	cout << "������ �̸�: ";
	cin >> name;
	cout << "������ ��ȭ��ȣ: ";
	cin >> phone;
	cout << "������ �̸���: ";
	cin >> email;
	cout << "������ �ּ�: ";
	cin >> address;
	cout << "������ Ʈ���� ����: ";
	cin >> twitter;
	owner.setInfo(name, phone, email, address, twitter);
	cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
}

void Controller::outputOwnerInfo() {
	owner.getInfo();
}

void Controller::editOwnerInfo() {
	int selectedNum;
	cout << "1. ������ �̸� ����" << endl;
	cout << "2. ������ ��ȭ��ȣ ����" << endl;
	cout << "3. ������ �̸��� ���� " << endl;
	cout << "4. ������ �ּ� ����" << endl;
	cout << "5. ������ Ʈ���� ���� ����" << endl;
	cout << "6. ���� ���� ���� �޴���" << endl;
	cin >> selectedNum;

	switch (selectedNum) {
	case 1:
		cout << "�̸��� �Է��ϼ���: ";
		cin >> name;
		owner.editNameInfo(name);
		cout << "�������� �̸��� �����Ǿ����ϴ�." << endl;
		break;
	case 2:
		cout << "��ȭ��ȣ�� �Է��ϼ���: ";
		cin >> phone;
		owner.editPhoneNumberInfo(phone);
		cout << "�������� ��ȭ��ȣ�� �����Ǿ����ϴ�." << endl;
		break;
	case 3:
		cout << "������ �Է��ϼ���: ";
		cin >> email;
		owner.editEmailInfo(email);
		cout << "�������� ������ �����Ǿ����ϴ�." << endl;
		break;
	case 4:
		cout << "�ּҸ� �Է��ϼ���: ";
		cin >> address;
		owner.editAddressInfo(address);
		cout << "�������� �ּҰ� �����Ǿ����ϴ�." << endl;
		break;
	case 5:
		cout << "Ʈ���� ������ �Է��ϼ���: ";
		cin >> twitter;
		owner.editTwiterInfo(twitter);
		cout << "�������� Ʈ���� ������ �����Ǿ����ϴ�." << endl;
		break;
	default:
		cout << "�ƹ��͵� �������� �ʾҽ��ϴ�." << endl;
	}
}


void Controller::manageContactInfo() {
	int selectedNum;
	int index;
	do {
		cout << "1. ����ó �߰� �Է�" << endl;
		cout << "2. ����ó ��� ��ȸ" << endl;
		cout << "3. ����ó ����" << endl;
		cout << "4. ����ó �� ��ȸ" << endl;
		cout << "5. ���� ȭ��" << endl;
		cin >> selectedNum;

		switch (selectedNum) {
		case 1:
			addContactInfo();
			break;
		case 2:
			outputContactInfo();
			break;
		case 3:
			removeContactByIndex();
			break;
		case 4:
			cout << "��ȸ�� ����ó index: ";
			cin >> index;
			printContactInfoByIndex(index);
			break;
		case 5:
			cout << "���� ȭ������ ���� ���ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���." << endl;
		}
	} while (selectedNum != 5);
}

void Controller::addContactInfo() {
	cout << "����ó �̸�: ";
	cin >> name;
	cout << "����ó ��ȭ��ȣ: ";
	cin >> phone;
	cout << "����ó �̸���: ";
	cin >> email;
	cout << "����ó �ּ�: ";
	cin >> address;

	pContacts[numOfContacts].setInfo(name, phone, email, address);
	numOfContacts++;
}

void Controller::outputContactInfo() {
	for (int i = 0; i < numOfContacts; i++) {
		cout << i << " : ";
		pContacts[i].getInfo();
	}
}
void Controller::removeContactByIndex() {
	int index;
	cout << "������ ����ó index: ";
	cin >> index;

	if ((index < numOfContacts) && index >= 0) {
		for (int i = index + 1; i < numOfContacts; i++) {
			pContacts[i - 1] = pContacts[i];
		}
	}
	numOfContacts--;
}

void Controller::printContactInfoByIndex(int _index) {
	cout << _index << "�� index �� ���� ����ó ��ȸ" << endl;
	pContacts[_index].getFullInfo();
}