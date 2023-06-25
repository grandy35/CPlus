#include <iostream>
#include <time.h>

using namespace std;

int main() {
    const int N = 5; // ����������� �������
    const int R = 5;
    int arr[N][R]; // ���������� ���������� �������

    // ���������� �������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < R; j++) {
            arr[i][j] = i + j;
        }
    }

    // ����� ������� � �������
    cout << "������:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < R; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ���������� ������� ������
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    buf.tm_mday;

    // ������������� �������
    int index = buf.tm_mday % R;

    // ���������� ����� ��������� � ������ � �������� ��������
    int sum = 0;
    for (int j = 0; j < R; j++) {
        sum = sum + arr[index][j];
    }

    // ����� ���������� � �������
    cout << "����� ��������� � ������ " << index << ": " << sum << endl;

    return 0;
}