#include <iostream>
#include <time.h>

using namespace std;

int main() {
    const int N = 5; // размерность массива
    int arr[N][N]; // объявление двумерного массива

    // заполнение массива
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i + j;
        }
    }

    // вывод массива в консоль
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // вычисление индекса строки
    int index = localtime_s % N ;

    // вычисление суммы элементов в строке с заданным индексом
    int sum = 0;
    for (int j = 0; j < N; j++) {
        sum = sum + arr[index][j];
    }

    // вывод результата в консоль
    cout << "Сумма элементов в строке " << index << ": " << sum << endl;

    return 0;
}