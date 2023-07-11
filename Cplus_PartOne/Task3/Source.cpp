#include <iostream>
#include <time.h>

using namespace std;


/*
�������� �����, ������ �������� ����� ��� ������ � ���������� ��������� ���� ������� �����.
������� � ������������, ������� ������� �� ����� ��������, � �������� ������������ ������ ������������ �������.
�������� �� ������������ ����� ������� � ��������� ��� ���� � ��������� � �������.
������������ ������ �� �������� ���������� �����, ��������� ��������.
�������� ��� ����� � ���� ������� � ��������������� ����.
*/

class Player {
public:
    int score;
    string name;
};



void show_players(Player* players, int number_of_players) {
    cout << endl;
    for (int i = 0; i < number_of_players; i++) {
        cout << "Name: " << players[i].name << " ";
        cout << "Score: " << players[i].score;
        cout << endl;
    }
    cout << endl;
}

void bubble_sort(Player* players, int number_of_players) {
    for (int i = 0; i < number_of_players - 1; i++) {
        for (int j = 0; j < number_of_players - i - 1; j++) {
            if (players[j].score < players[j + 1].score) {
                int temp = players[j].score;
                players[j].score = players[j + 1].score;
                players[j + 1].score = temp;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Russian");

    int number_of_players;
    cout << "how many players do you want: ";
    cin >> number_of_players;

    Player* players = new Player[number_of_players];
    for (int i = 0; i < number_of_players; i++) {
        cout << "Player #" << i + 1 << ". Input name: ";
        cin >> players[i].name;
        cout << "Player #" << i + 1 << ". Input score: ";
        cin >> players[i].score;
    }

    cout << endl << "Before sorting: " << endl;
    show_players(players, number_of_players);

    bubble_sort(players, number_of_players);
    
    cout << "After sorting: " << endl;
    show_players(players, number_of_players);
    delete[number_of_players] players;
}