// Lost Fortune
// A personnlized adventure

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    cout << "Welcome to Lost Fortune\n\n";
    cout << "Please enter the following for your personalized adventure\n";

    cout << "Enter the number of adventurers: ";
    cin >> adventurers;

    cout << "Enter a number, smaller than the first: ";
    cin >> killed;

    survivors = adventurers - killed;

    cout << "Enter your last name: ";
    cin >> leader;

    //Telling the story
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the commannd of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, ";
    cout << "leaving just " << survivors << " in the group.\n";

    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split the " << GOLD_PIECES << " gold pieces for a total of " << (GOLD_PIECES/survivors) << " each. ";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n\n\n\n";

    system("pause");

    return 0;
    
}