#include <iostream>
#include <time.h>

using namespace std;

int main() {
    const int N = 5; // ����������� �������
    int arr[N][N]; // ���������� ���������� �������

    // ���������� �������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i + j;
        }
    }

    // ����� ������� � �������
    cout << "������:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ���������� ������� ������
    int index = localtime_s % N ;

    // ���������� ����� ��������� � ������ � �������� ��������
    int sum = 0;
    for (int j = 0; j < N; j++) {
        sum = sum + arr[index][j];
    }

    // ����� ���������� � �������
    cout << "����� ��������� � ������ " << index << ": " << sum << endl;

    return 0;
}