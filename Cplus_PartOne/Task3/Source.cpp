#include <iostream>

using namespace std;

void printNumber(int number, bool is_even)
{
    if (is_even)
    {
        if (number % 2 == 0)
        {
            cout << number << " ";
        }
    }
    else
    {
        if (number % 2 == 1)
        {
            cout << number << " ";
        }
    }
}

void wrapper(int max_number, bool is_even)
{
    for (int i = 0; i <= max_number; i++)
    {
        printNumber(i, is_even);
    }
}

int main()
{
    const int max_number = 30;
    wrapper(max_number, false);
}
