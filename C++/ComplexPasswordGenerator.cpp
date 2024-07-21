// Generate a complex password

/*
 * Tabella ASCII range: 33 - 126
*/

#include <iostream>
#include <ctime>

using namespace std;

// Global values
int Op, L, c;

// The name of this program
void Title() {
    system("clear && figlet -f slant PassMaker && sleep 1");
}

// Menu and choose
void Menu() {
    // Guide
    cout<<endl<<"Choose the operation:"<<endl;
    cout<<"1) Generate a new password"<<endl<<"2) Exit"<<endl;

    // Input
    cout<<">";
    cin>>Op; // operation

    // Controllo operazione
    while(Op != 1 && Op != 2) {
        cout<<endl<<"Error! choose 1 or 2!"<<endl<<">";
        cin>>Op;
    }
}

// Generate and Make password
void PassGenerator() {
    cout<<endl<<"Password lenght >";
    cin>>L;

    cout<<endl<<"New password ==> ";

    // Maker
    for (int i=0; i < L; i++) {
        c = rand()%(126 - 33) + 33;
        cout<<char(c);
    }

    cout<<endl;
}

// Wait a moment
void Wait() {
    string Tasto;

    cout<<endl<<"Enter a character to continue... >";
    cin>>Tasto;

    cout<<endl;
}

int main() {
    // For random
    srand(time(0));

    // Start loop
    while(true) {
        Title();

        Menu();

        if (Op == 1) {
            PassGenerator();
            Wait();
        } else {
            cout<<endl<<"Thank you for using this program!"<<endl;
            cout<<endl<<"Good bye!"<<endl;
            break;
        }
    }

    return 0;
}
