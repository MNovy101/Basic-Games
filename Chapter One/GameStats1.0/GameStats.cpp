//Game Stats
//Demonstrates declaring and initializing variables

#include <iostream>
using namespace std;

int main() {
    int score, fuel;
    double distance;
    char playAgain, hold;
    bool shieldsUp;

    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;
    typedef unsigned short int ushort;
    ushort bonus = 10;

    cout << "\nscrore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "Play Again: " << playAgain << endl;
    if (shieldsUp == true) {
        cout << "Shield is up!" << endl;
        } else {
        cout << "Shield is down!" << endl;
        }
    cout << "Lives: " << lives << endl;
    cout << "Aliens Killed: " << aliensKilled << endl;
    cout << "Engine Temp: " << engineTemp << endl;

    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "Fuel: " << fuel << endl;
    cout << "\nBonus: " << bonus << endl;
    cin >> hold;

    return 0;
}