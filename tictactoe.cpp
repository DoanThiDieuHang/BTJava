#include <iostream>

using namespace std;

int main()
{
    char choice2;
    char xo;
    int choice;
    string plr1;
    string plr2;
    char a =' '; char b= ' '; char c= ' '; char d = ' '; 


    //INTRODUCTION - cin player's names
    START:
    cout << "3x3 - 2 PLAYERS - CARO BOARD (Use NumPad for optimal gameplay)" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Insert player 1's name (No space between characters)" << endl;
    cin >> plr1;
    cout << endl;
    cout << "Insert player 2's name (No space between characters)" << endl;
    cin >> plr2;
    cout << endl;
    //GAMEPLAY

    cout << " ___________________" << endl;
    cout << " |  O  | (3) | (4) |" << endl;
    cout << " |_____|_____|_____|" << endl;
    cout << " |  X  |  X  |  O  |" << endl;
    cout << " |_____|_____|_____|" << endl;
    cout << " | (1) |  O  | (2) |" << endl;
    cout << " |_____|_____|_____|" << endl;
    cout << endl;
    cout << endl;


    for ( int k = 1; k < 5 ; k ++) {

        if ( k % 2 == 0) {
            cout << ""<<plr1<<"'s turn " << endl;
            xo = 'O';
        }
        else {
            cout << ""<<plr2<<"'s turn " << endl;
            xo = 'X';
        }
        cout << "Please make your choice by selecting the appropriate number (Use NumPad for optimal gameplay)" << endl;
        cin >> choice;
        switch (choice) {
                case 4:
                    a=xo;
                    break;
                case 3:
                    b=xo;
                    break;
                case 2:
                    c=xo;
                    break;
                case 1:
                    d=xo;
                    break;
                default:
                    cout << "ERROR: Pick the number within range" << endl;
                    break;
        }

        cout << " ___________________" << endl;
        cout << " |  O  |  "<<b<<"  |  "<<a<<"  |" << endl;
        cout << " |_____|_____|_____|" << endl;
        cout << " |  X  |  X  |  O  |" << endl;
        cout << " |_____|_____|_____|" << endl;
        cout << " |  "<<d<<"  |  O |  "<<c<<"  |" << endl;
        cout << " |_____|_____|_____|" << endl;
        cout << endl;
        cout << endl;

        if ( a == 'X' && d == 'X') {
                cout << "   "<<plr1<<" WON!!! " << endl;
                goto QUESTION;
                }
        else if ( a == 'O' && b == 'O' || a == 'O' && c == 'O'|| d == 'O' && c == 'O')   {
                cout << "   "<<plr2<<" WON!!! " << endl;
                goto QUESTION;
                }
    }

    QUESTION:
        cout << " Do you want to play again? <y/n>" << endl;
        cin >> choice2;
        switch (choice2)
            case 'y' :
                goto START;


    return 0;
}