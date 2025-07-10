//Game Stats 2.0
//Demonstrates arithmetic operations with variables

#include<iostream>
using namespace std;

int main() {
    unsigned int score = 5000;
    int lives = 3;

    cout << "score: " << score << endl;

    //altering the value of a variable
    score = score + 100;
    cout << "\nAltering the value of a variable" << endl;
    cout << "score: " << score << endl;

    //combined assignment operator
    score += 100;
    cout << "\nCombined assignment operator" << endl;
    cout << "score: " << score << endl;

    //increment operators
    ++lives;
    cout << "\nIncrement operators (++lives)" << endl;
    cout << "Lives: " << lives << endl;

    lives = 3;
    lives++;
    cout << "\nIncrement operators (lives++)" << endl;
    cout << "Lives: " << lives << endl;

    //Increasing bonus based on number of lives
    lives = 3;
    int bonus = ++lives * 10;
    cout << "\nIncreasing bonus based on number of lives (Bonus = ++lives * 10))" << endl;
    cout << "Bonus for Lives: " << lives << " , " << bonus << endl;

    lives = 3;
    bonus = lives++ * 10;
    cout << "\nIncreasing bonus based on number of lives (Bonus = lives++ * 10))" << endl;
    cout << "Bonus for Lives: " << lives << " , " << bonus << endl;

    //Integer wrap around
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    char k;
    cin >> k;

    return 0;
}