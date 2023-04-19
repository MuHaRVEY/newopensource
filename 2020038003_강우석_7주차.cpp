//얼마나 많은 에러, 예외가 있는지 작성할 것

#include<iostream>
using namespace std;

template <typename T>
class Queue // 큐(Queue) 클래스 정의
{
public: //외부 접근 가능 public 
    Queue() // 인덱스 초기화를 통하여 비어 있는 큐 생성
    {
        startIndex = 0; // 시작 인덱스 초기화
        endIndex = 0; // 끝 인덱스 초기화
    }

    // 큐에 항목을 추가하는 함수
    void Add(const T& item) {
        if (endIndex == 10) { // 예외 상황 : 큐가 꽉 찼을 경우
            cout << "큐가 가득 찼습니다. Add() 삽입 실패." << endl;
            return;
        }
        queue_[endIndex] = item; // 항목을 큐에 추가
        endIndex++; // 끝 인덱스(삽입이 이루어지는 인덱스) 증가
    }

    // 큐에서 아이템을 삭제하는 함수
    void Delete() {
        if (startIndex == endIndex) { // 예외 상황: 큐가 비어있을 경우
            cout << "큐가 비어있습니다. Delete() 삭제 실패." << endl;
            return;
        }
        startIndex++; // 시작 인덱스를 증가하여 삭제 연산
        if (startIndex == endIndex) { // 큐가 완전히 비어있는 상태인 경우
            startIndex = 0; // 시작 인덱스를 다시 0으로 초기화
            endIndex = 0; // 끝 인덱스도 0으로 초기화
        }
    }

    // 큐의 아이템을 출력하는 함수
    void PrintQueue() {
        cout << "현재 큐의 항목들: ";
        for (int i = startIndex; i < endIndex; i++) {
            cout << queue_[i] << " ";
        }
        cout << endl;
    }

private: //class 내에서만 접근 private
    T queue_[10]; // 큐의 역할을 할 배열
    int startIndex; // 시작 인덱스
    int endIndex; // 끝 인덱스
};


int main() {
    Queue<int> my_queue; // 템플릿 인스턴트화를 통한 정수형 큐 객체 생성
    my_queue.Add(1);
    my_queue.Add(2);
    my_queue.Add(3);
    my_queue.PrintQueue(); 
    cout << endl;

    Queue<double> my_queue2; // 템플릿 인스턴트화를 통한 double형 큐 객체 생성
    my_queue2.Add(2.2);
    my_queue2.Add(11.2);
    my_queue2.Add(13.232);
    my_queue2.Add(34534.24134);
    my_queue2.PrintQueue(); 
    cout << endl;

    Queue<char> my_queue3; // 템플릿 인스턴트화를 통한 char형 큐 객체 생성
    my_queue3.Add('a');
    my_queue3.Add('b');
    my_queue3.Add('c');
    my_queue3.Add('d');
    my_queue3.Add('e');
    my_queue3.Add('f');
    my_queue3.Add('u');
    my_queue3.PrintQueue(); 
    cout << endl;

    Queue<int> my_queue4; //가득차있을 경우 예시
    my_queue4.Add(1);
    my_queue4.Add(2);
    my_queue4.Add(3);   
    my_queue4.Add(1);
    my_queue4.Add(2);
    my_queue4.Add(3);    
    my_queue4.Add(1);
    my_queue4.Add(2);
    my_queue4.Add(3);    
    my_queue4.Add(1);
    my_queue4.PrintQueue();
    my_queue4.Delete();
    my_queue4.Add(3);
    my_queue4.PrintQueue();
    cout << endl;

    Queue<int> my_queue5;
    my_queue5.Delete();
    return 0;
}

//값을 입력받아 작동할 수는 없을까? 

//while (true) {
//    cout << "1. 큐에 값을 추가합니다." << endl;
//    cout << "2. 큐에서 데이터를 하나 삭제합니다." << endl;
//    cout << "3. 큐 출력하기;" << endl;
//    cout << "4. 종료" << endl;
//    cout << "몇번 동작을 실행하시겠습니까? (1~4): ";
//    cin >> choice;
//
//    switch (choice) {
//    case 1: {
//        cout << "Enter item to add: ";
//        cin >> item;
//        my_queue.Add(item);
//        break;
//    }
//    case 2: {
//        my_queue.Delete();
//        break;
//    }
//    case 3: {
//        my_queue.PrintQueue();
//        break;
//    }
//    case 4: {
//        return 0;
//    }
//    default: {
//        cout << "잘못된 값입니다. 다시 입력해주세요." << endl;
//        break;
//    }
//    }
//}
