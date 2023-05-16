#include <iostream>

int main()
{
    cout << "Are you a bad enough dude to rescue the President? Y/N: ";
    char answer;
    cin >> answer;
    if (answer == 'Y' || answer == 'y')
        cout << "\n\nInsert coin to continue.";
    else if (answer =='N' || answer == 'n')
        cout << "\n\nThen get off the machine!";
    else
        cout << "\n\nLearn to follow the rules!";

    return 0;
}