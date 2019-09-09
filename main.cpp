#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
void enterName();
void enterInt();
int enterValidInt();

void menu() {
    bool stop = false;
    while (!stop){
        cout << "Please choose something:\nA] Enter name\nB] Enter integer\nC] Enter valid integer\nX] Exit program\n>>"<< endl;
        string choice;
        cin >> choice;
        if (choice.length() > 1 || choice.length() < 1) {
            cout << "Sorry that is not valid" << endl;
        } else {
            switch (toupper(choice[0])) {
                case 'A':
                    enterName();
                    break;
                case 'B':
                    enterInt();
                    cin.clear();
                    break;
                case 'C':
                    enterValidInt();
                    break;
                case 'X':
                    stop = true;
                    cout << "Bye bye"<< endl;
                    break;
                default:
                    cout << "Sorry that is not a valid choice" << endl;
                    break;
            }
        }
    }
}

int enterValidInt() {
    //TODO: Finish this
    cout << "Not implemented yet" << endl;
    return 0;
}

void enterInt() {
    long double integer;
    cout << "Enter a number\n>>" << fixed << setprecision(0) << endl;
    cin >> integer;
    integer = static_cast<long long int>(integer);
    if (integer > (pow(2,63)-1) || integer < 0) {
        cout << "Sorry that number is too big / small for me to handle!" << endl;
        cin.clear();
    } else {
        cout << integer << " is a nice number!" << endl;
    }
}

void enterName() {
    string name;
    cout << "Enter a name\n>>" << endl;
    cin >> name;
    cout << "Oh hi there " << name << "!" << endl;
}

int main() {
    menu();
    return 0;
}