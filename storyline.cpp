#include <iostream>
#include <string>
using namespace std;

int main(){
    string choice;
    bool validchoice = false;

    cout << "you wake up in mysterious forest. there are two paths ahead of you\n";
    cout << "which way do you want to go?(left/right)\n";

    while (!validchoice){
        cin >> choice;

        if(choice == "left"){
            validchoice = true;
            cout << "you take the left path and come across a river\n";
        }else if (choice == "right"){
            validchoice = true;
            cout << "you take the right path and encounter a dark cave\n";
        }else {
            cout << "invalid choice. please choose  left or right\n";
        }
    }

    if (choice == "left"){
        cout << "there is treassure on the other side of the river which you have to cross.it is a fast flowing river with many sea monsters that are in a hurry to get to the sea.\n";
        cout << "do you want to swim or find a bridge? (swim/bridge)";
        cin >> choice;

        if (choice == "swim"){
            cout << "you dive into the river and try to swim across, but the sea monsters attack!\n";
            cout << "do you want to fight or escape? (fight/escape)\n";
            cin >> choice;

            if(choice == "fight"){
                cout << "you bearly fight the sea monsters and make it across. you found the treassure!\n";
            }else if(choice == "escape"){
                cout << "you manage to escape the monsters, but you are swept downstream and lose valuble time.\n";
            }else {
                cout << "invalid choice.\n";
            }
        }else if(choice == "bridge"){
            cout << "you found a very old bridge and cross it carefully. you arrive at the treassuer\n";
        }else {
            cout << "invalid choice. you waited too long and the river becomes more dangerous.\n";
        }
    }

     else if (choice == "right"){
        cout << "in the dark cave lies the king of the jungle. fight him off and get a clue for your next destination.\n";
        cout << "do you want to fight him off or sneak past him? (fight/sneak)";
        cin >> choice;

        if (choice == "fight"){
            cout << "you bravely fight the king of th jungle and manage to defeat him! you find a clue to your next destination\n";
        }else if (choice == "sneak"){
            cout << "you successfully sneak past the king and fine a hidden passage leading deeper into the cave\n";
        }else{
            cout << "invalid choice. the king notices your heitation and attacks!\n";
        }
    } else {
        cout << "invalid choice.you stand still unsure of what to do and time slips away\n";
    }

    return 0;
}