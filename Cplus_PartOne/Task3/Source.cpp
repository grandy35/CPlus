#include <iostream>
#include <time.h>

using namespace std;

/*
	�������� ����� �������.
	��� ���������� ������ ���� � ��������� ������� ���������.
	���������� �������� ���� ���������� ����� ����� ��������� �����.
	��������� ����� Vector public �������, ������� ����� ���������� ����� (������) �������.
	�� �++
*/

class Vector {
private:
	double x;
	double y;
	double z;

public:
	Vector(double x1, double y1, double z1) {
		x = x1;
		y = y1;
		z = z1;
	}

	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	double get_z() {
		return z;
	}

	int get_lenght() {
		return pow(x, 2) + pow(y, 2) + pow(z, 2); // x^2 + y^2 + z^2
	}
};

int main()
{
	Vector vector(5, 10, 15);
	cout << vector.get_x() << ' ' << vector.get_y() << ' ' << vector.get_z() << endl;
	cout << "Length of vector = " << vector.get_lenght();
}