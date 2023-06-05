#include <iostream>
#include "Helpers.h"

using namespace std;

int main()
{
	string test1("hand");
	cout << test1 << " " << test1.length() << " " << test1[0] << " " << test1[test1.length() - 1];
}