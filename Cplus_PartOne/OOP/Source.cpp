#include <iostream>
#include <time.h>

using namespace std;

//Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом. 
//Наследуйте от Animal минимум три класса (к примеру Dog, Cat и т. д.) и в них перегрузите метод Voice() таким образом,
//чтобы для примера в классе Dog метод Voice() выводилось Woof! в консоль.
//В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов.
//Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice().
//Протестируйте его работу. Должны выводиться сообщения из ваших классов-наследников Animal.

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