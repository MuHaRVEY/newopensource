//�󸶳� ���� ����, ���ܰ� �ִ��� �ۼ��� ��

#include<iostream>
using namespace std;

template <typename T>
class Queue // ť(Queue) Ŭ���� ����
{
public: //�ܺ� ���� ���� public 
    Queue() // �ε��� �ʱ�ȭ�� ���Ͽ� ��� �ִ� ť ����
    {
        startIndex = 0; // ���� �ε��� �ʱ�ȭ
        endIndex = 0; // �� �ε��� �ʱ�ȭ
    }

    // ť�� �׸��� �߰��ϴ� �Լ�
    void Add(const T& item) {
        if (endIndex == 10) { // ���� ��Ȳ : ť�� �� á�� ���
            cout << "ť�� ���� á���ϴ�. Add() ���� ����." << endl;
            return;
        }
        queue_[endIndex] = item; // �׸��� ť�� �߰�
        endIndex++; // �� �ε���(������ �̷������ �ε���) ����
    }

    // ť���� �������� �����ϴ� �Լ�
    void Delete() {
        if (startIndex == endIndex) { // ���� ��Ȳ: ť�� ������� ���
            cout << "ť�� ����ֽ��ϴ�. Delete() ���� ����." << endl;
            return;
        }
        startIndex++; // ���� �ε����� �����Ͽ� ���� ����
        if (startIndex == endIndex) { // ť�� ������ ����ִ� ������ ���
            startIndex = 0; // ���� �ε����� �ٽ� 0���� �ʱ�ȭ
            endIndex = 0; // �� �ε����� 0���� �ʱ�ȭ
        }
    }

    // ť�� �������� ����ϴ� �Լ�
    void PrintQueue() {
        cout << "���� ť�� �׸��: ";
        for (int i = startIndex; i < endIndex; i++) {
            cout << queue_[i] << " ";
        }
        cout << endl;
    }

private: //class �������� ���� private
    T queue_[10]; // ť�� ������ �� �迭
    int startIndex; // ���� �ε���
    int endIndex; // �� �ε���
};


int main() {
    Queue<int> my_queue; // ���ø� �ν���Ʈȭ�� ���� ������ ť ��ü ����
    my_queue.Add(1);
    my_queue.Add(2);
    my_queue.Add(3);
    my_queue.PrintQueue(); 
    cout << endl;

    Queue<double> my_queue2; // ���ø� �ν���Ʈȭ�� ���� double�� ť ��ü ����
    my_queue2.Add(2.2);
    my_queue2.Add(11.2);
    my_queue2.Add(13.232);
    my_queue2.Add(34534.24134);
    my_queue2.PrintQueue(); 
    cout << endl;

    Queue<char> my_queue3; // ���ø� �ν���Ʈȭ�� ���� char�� ť ��ü ����
    my_queue3.Add('a');
    my_queue3.Add('b');
    my_queue3.Add('c');
    my_queue3.Add('d');
    my_queue3.Add('e');
    my_queue3.Add('f');
    my_queue3.Add('u');
    my_queue3.PrintQueue(); 
    cout << endl;

    Queue<int> my_queue4; //���������� ��� ����
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

//���� �Է¹޾� �۵��� ���� ������? 

//while (true) {
//    cout << "1. ť�� ���� �߰��մϴ�." << endl;
//    cout << "2. ť���� �����͸� �ϳ� �����մϴ�." << endl;
//    cout << "3. ť ����ϱ�;" << endl;
//    cout << "4. ����" << endl;
//    cout << "��� ������ �����Ͻðڽ��ϱ�? (1~4): ";
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
//        cout << "�߸��� ���Դϴ�. �ٽ� �Է����ּ���." << endl;
//        break;
//    }
//    }
//}
