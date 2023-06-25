#include <iostream>
#include <time.h>

using namespace std;

int main() {
    const int N = 5; // размерность массива
    const int R = 5;
    int arr[N][R]; // объявление двумерного массива

    // заполнение массива
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < R; j++) {
            arr[i][j] = i + j;
        }
    }

    // вывод массива в консоль
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < R; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // вычисление индекса строки
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    buf.tm_mday;

    // инициализация индекса
    int index = buf.tm_mday % R;

    // вычисление суммы элементов в строке с заданным индексом
    int sum = 0;
    for (int j = 0; j < R; j++) {
        sum = sum + arr[index][j];
    }

    // вывод результата в консоль
    cout << "Сумма элементов в строке " << index << ": " << sum << endl;

    return 0;
}