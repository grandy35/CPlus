#include <iostream>
#include <time.h>

using namespace std;

//�������� ����� Animal � ��������� ������� Voice(), ������� ������� � ������� ������ � �������. 
//���������� �� Animal ������� ��� ������ (� ������� Dog, Cat � �. �.) � � ��� ����������� ����� Voice() ����� �������,
//����� ��� ������� � ������ Dog ����� Voice() ���������� Woof! � �������.
//� ������� main �������� ������ ���������� ���� Animal � ��������� ���� ������ ��������� ��������� �������.
//����� ���������� ������ �� �������, ������� �� ������ �������� ������� ����� Voice().
//������������� ��� ������. ������ ���������� ��������� �� ����� �������-����������� Animal.

class Animal {
public:
    virtual void voice() {
        cout << "Animal";
    }
};

class Dog : public Animal {
public:
    void voice() override {
        cout << "Woof!";
    }
};

class Cow : public Animal {
public:
    void voice() override {
        cout << "Moooo";
    }

};

class Cat : public Animal {
public:
    void voice() override {
        cout << "Meow";
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 3;
    Animal* animals[n] = {
        new Dog(),
        new Cow(),
        new Cat()
    };
    for (int i = 0; i < n; i++) {
        animals[i]->voice();
        cout << endl;
    }
}