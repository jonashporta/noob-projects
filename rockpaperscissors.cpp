#include <iostream> 
#include <stdlib.h>
using namespace std;

int main (){
    
    srand(time(NULL));

    int computer = rand ()% 3 + 1;

    int user;

    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << "1. rock\n";
    cout << "2. paper\n";
    cout << "3. scissors\n";

    cout << "shoot! \n";

    cin >> user;

    if (user == 1)
    cout << "you chose: rock\n";
    else if (user == 2)
    cout << "you chose: paper\n";
    else
    cout << "you chose: scissors\n";

    if (computer == 1)
    cout << "cpu chose: rock\n";
    else if (computer == 2)
    cout << "cpu chose: paper\n";
    else
    cout << "cpu chose: scissors\n";

    if (user == computer){
        cout << "its a tie!\n";
    }

    else if (user == 1){
        if (computer == 2){
            cout << "lost you lost\n`";
        }
    
    if (computer == 3){
        cout << "you won\n";
    }
    }

    else if (user == 2){
        if (computer == 1){
            cout << "you won\n";
        }
        if (computer ==3){
            cout << "you lost\n";
        }
    }
    else if (user == 3){
        if (computer == 1){
            cout << "you won\n";
        }
        if (computer == 2){
            cout << "you lost\n";
        }
    }

    return 0;
}
