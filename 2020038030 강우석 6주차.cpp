#include<iostream>
using namespace std;

struct sStudent {
	char studentName[20];
	int studentAge;
	int studentID;
	char studentAddress[100];
};

void getAge(sStudent& student) //�л��� ���̸� 1�� ������Ű�� �Լ� ����
{
	student.studentAge++;
}

int main()
{
	sStudent student[5] = {		// ���Ƿ� ����ü �迭 �ʱ�ȭ.
		{"���켮",24,2020038003,"�泲 �¾ȱ�"},
		{"�ƹ���",23,2020123456,"��� û�ֽ�"},
		{"�򰳹�",22,2021035683,"����������"},
		{"��ö��",21,2022032345,"����Ư����"},
		{"����ѹ�",20,2023038345,"�λ걤����"},

	};

	cout << "2023��, ���� 5���� �л��� �����Դϴ�.\n"; //���� ���� ���
	for (int i = 0; i < 5; i++) {
		cout << " �л� �̸�: " << student[i].studentName;
		cout << ", �л� ����: " << student[i].studentAge;
		cout << ", �л� �й�: " << student[i].studentID;
		cout << ", �л� �ּ�: " << student[i].studentAddress;
		cout << "\n\n";
	}

	for(int i=0;i<5;i++) getAge(student[i]);
	cout << "2024��, 5���� �л��� ���̸� �� �쾿 �Ծ����ϴ�.\n";

	for (int i = 0; i < 5; i++) { //���̸� 1�� ������Ų �� ���� ���
		cout << " �л� �̸�: " << student[i].studentName;
		cout << ", �л� ����: " << student[i].studentAge;
		cout << ", �л� �й�: " << student[i].studentID;
		cout << ", �л� �ּ�: " << student[i].studentAddress;
		cout << "\n\n";
	}

	return 0;
}
