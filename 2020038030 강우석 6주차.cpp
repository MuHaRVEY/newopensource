#include<iostream>
using namespace std;

struct sStudent {
	char studentName[20];
	int studentAge;
	int studentID;
	char studentAddress[100];
};

void getAge(sStudent& student) //학생의 나이를 1씩 증가시키는 함수 정의
{
	student.studentAge++;
}

int main()
{
	sStudent student[5] = {		// 임의로 구조체 배열 초기화.
		{"강우석",24,2020038003,"충남 태안군"},
		{"아무개",23,2020123456,"충북 청주시"},
		{"흰개미",22,2021035683,"대전광역시"},
		{"김철수",21,2022032345,"서울특별시"},
		{"김수한무",20,2023038345,"부산광역시"},

	};

	cout << "2023년, 기존 5명의 학생의 정보입니다.\n"; //기존 정보 출력
	for (int i = 0; i < 5; i++) {
		cout << " 학생 이름: " << student[i].studentName;
		cout << ", 학생 나이: " << student[i].studentAge;
		cout << ", 학생 학번: " << student[i].studentID;
		cout << ", 학생 주소: " << student[i].studentAddress;
		cout << "\n\n";
	}

	for(int i=0;i<5;i++) getAge(student[i]);
	cout << "2024년, 5명의 학생이 나이를 한 살씩 먹었습니다.\n";

	for (int i = 0; i < 5; i++) { //나이를 1씩 증가시킨 뒤 정보 출력
		cout << " 학생 이름: " << student[i].studentName;
		cout << ", 학생 나이: " << student[i].studentAge;
		cout << ", 학생 학번: " << student[i].studentID;
		cout << ", 학생 주소: " << student[i].studentAddress;
		cout << "\n\n";
	}

	return 0;
}
