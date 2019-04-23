#include "Controller.h"

void Controller::runMainMenu() {
	do {
		cout << "1. 소유자 관리 기능" << endl;
		cout << "2. 연락처 관리 기능" << endl;
		cout << "3. 프로그램 종료" << endl;
		cin >> selectedMenuNum;

		switch (selectedMenuNum) {
		case 1:
			manageOwnerInfo();
			break;
		case 2:
			manageContactInfo();
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
		}
	} while (selectedMenuNum != 3);
}

void Controller::manageOwnerInfo() {
	int selectedNum;
	do {
		cout << "1. 소유자 정보 입력" << endl;
		cout << "2. 소유자 정보 조회" << endl;
		cout << "3. 소유자 정보 수정" << endl;
		cout << "4. 이전 화면" << endl;
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
			cout << "이전 화면으로 돌아갑니다." << endl;
			break;
		default:
			cout << "잘못 입력했습니다. 다시 해주세요." << endl;
		}
	} while (selectedNum != 4);
}

void Controller::inputOwnerInfo() {
	cout << "소유자 이름: ";
	cin >> name;
	cout << "소유자 전화번호: ";
	cin >> phone;
	cout << "소유자 이메일: ";
	cin >> email;
	cout << "소유자 주소: ";
	cin >> address;
	cout << "소유자 트위터 계정: ";
	cin >> twitter;
	owner.setInfo(name, phone, email, address, twitter);
	cout << "입력이 완료 되었습니다." << endl;
}

void Controller::outputOwnerInfo() {
	owner.getInfo();
}

void Controller::editOwnerInfo() {
	int selectedNum;
	cout << "1. 소유자 이름 수정" << endl;
	cout << "2. 소유자 전화번호 수정" << endl;
	cout << "3. 소유자 이메일 수정 " << endl;
	cout << "4. 소유자 주소 수정" << endl;
	cout << "5. 소유자 트위터 계정 수정" << endl;
	cout << "6. 수정 없이 이전 메뉴로" << endl;
	cin >> selectedNum;

	switch (selectedNum) {
	case 1:
		cout << "이름을 입력하세요: ";
		cin >> name;
		owner.editNameInfo(name);
		cout << "소유자의 이름이 수정되었습니다." << endl;
		break;
	case 2:
		cout << "전화번호를 입력하세요: ";
		cin >> phone;
		owner.editPhoneNumberInfo(phone);
		cout << "소유자의 전화번호가 수정되었습니다." << endl;
		break;
	case 3:
		cout << "메일을 입력하세요: ";
		cin >> email;
		owner.editEmailInfo(email);
		cout << "소유자의 메일이 수정되었습니다." << endl;
		break;
	case 4:
		cout << "주소를 입력하세요: ";
		cin >> address;
		owner.editAddressInfo(address);
		cout << "소유자의 주소가 수정되었습니다." << endl;
		break;
	case 5:
		cout << "트위터 계정을 입력하세요: ";
		cin >> twitter;
		owner.editTwiterInfo(twitter);
		cout << "소유자의 트위터 계정이 수정되었습니다." << endl;
		break;
	default:
		cout << "아무것도 수정되지 않았습니다." << endl;
	}
}


void Controller::manageContactInfo() {
	int selectedNum;
	int index;
	do {
		cout << "1. 연락처 추가 입력" << endl;
		cout << "2. 연락처 목록 조회" << endl;
		cout << "3. 연락처 삭제" << endl;
		cout << "4. 연락처 상세 조회" << endl;
		cout << "5. 이전 화면" << endl;
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
			cout << "조회할 연락처 index: ";
			cin >> index;
			printContactInfoByIndex(index);
			break;
		case 5:
			cout << "이전 화면으로 돌아 갑니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요." << endl;
		}
	} while (selectedNum != 5);
}

void Controller::addContactInfo() {
	cout << "연락처 이름: ";
	cin >> name;
	cout << "연락처 전화번호: ";
	cin >> phone;
	cout << "연락처 이메일: ";
	cin >> email;
	cout << "연락처 주소: ";
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
	cout << "삭제할 연락처 index: ";
	cin >> index;

	if ((index < numOfContacts) && index >= 0) {
		for (int i = index + 1; i < numOfContacts; i++) {
			pContacts[i - 1] = pContacts[i];
		}
	}
	numOfContacts--;
}

void Controller::printContactInfoByIndex(int _index) {
	cout << _index << "의 index 를 가진 연락처 조회" << endl;
	pContacts[_index].getFullInfo();
}