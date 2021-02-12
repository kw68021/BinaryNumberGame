#include <iostream>
#include <string>
using namespace std;

void welcome();
void firstBox();
void secondBox();
void thirdBox();
void fourthBox();
void fifthBox();

int calc(string choice1, string choice2, string choice3, string choice4, string choice5);
int main() {
    
    welcome();

    string choice1, choice2, choice3, choice4, choice5;
    int result;
    
    firstBox();
    cin >> choice1;
    cout << endl;
    secondBox();
    cin >> choice2;
    cout << endl;
    thirdBox();
    cin >> choice3;
    cout << endl;
    fourthBox();
    cin >> choice4;
    cout << endl;
    fifthBox();
    cin >> choice5;
    cout << endl;
    
    result = calc(choice1, choice2, choice3, choice4, choice5);
    cout << "Your number is: " << result << endl;
}

void welcome() {
    cout << "Hello, this is a simple game that guesses your number based on whether or not it is in any of the given boxes. " << "\nPlease answer in 'yes' or 'no'." << "\nThank you, and have fun." << endl << endl;
}
void firstBox() {

    cout << "\nPlease think of a number from 1-33" << endl;
    
    cout << "     |     |     |     |" << endl;
    cout << "  " << "1" << "  |  " << "3" << "  |  " << "5" << "  |  " << "7" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << "  " << "9" << "  | " << "11" << "  | " << "13" << "  | " << "15" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "17" << "  | " << "19" << "  | " << "21" << "  | " << "23" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "25" << "  | " << "29" << "  | " << "30" << "  | " << "31" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl << endl;

    cout << "Is your number in this box? ";
}

void secondBox() {

    cout << "     |     |     |     |" << endl;
    cout << "  " << "2" << "  |  " << "3" << "  |  " << "6" << "  |  " << "7" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "10" << "  | " << "11" << "  | " << "14" << "  | " << "15" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "18" << "  | " << "19" << "  | " << "22" << "  | " << "23" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "26" << "  | " << "27" << "  | " << "30" << "  | " << "31" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl << endl;

    cout << "Is your number in this box? ";
}

void thirdBox() {

    cout << "     |     |     |     |" << endl;
    cout << "  " << "4" << "  |  " << "5" << "  |  " << "6" << "  |  " << "7" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "12" << "  | " << "13" << "  | " << "14" << "  | " << "15" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "20" << "  | " << "21" << "  | " << "22" << "  | " << "23" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "28" << "  | " << "29" << "  | " << "30" << "  | " << "31" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl << endl;

    cout << "Is your number in this box? ";
}

void fourthBox() {

    cout << "     |     |     |     |" << endl;
    cout << "  " << "8" << "  |  " << "9" << "  | " << "10" << "  | " << "11" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "12" << "  | " << "13" << "  | " << "14" << "  | " << "15" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "24" << "  | " << "25" << "  | " << "26" << "  | " << "27" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "28" << "  | " << "29" << "  | " << "30" << "  | " << "31" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl << endl;

    cout << "Is your number in this box? ";
}

void fifthBox() {

    cout << "     |     |     |     |" << endl;
    cout << " " << "16" << "  | " << "17" << "  | " << "18" << "  | " << "19" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "20" << "  | " << "21" << "  | " << "22" << "  | " << "23" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "24" << "  | " << "25" << "  | " << "26" << "  | " << "27" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;

    cout << " " << "28" << "  | " << "29" << "  | " << "30" << "  | " << "31" << "  |  " << endl;

    cout << "_____|_____|_____|_____|" << endl << endl;

    cout << "Is your number in this box? ";
}

int calc(string choice1, string choice2, string choice3, string choice4, string choice5) {

    int first, second, third, fourth, fifth, final;

    if (choice1 == "yes") {
        first = 1;
    }
    else {
        first = 0;
    }
    if (choice2 == "yes") {
        second = 2;
    }
    else {
        second = 0;
    }
    if (choice3 == "yes") {
        third = 4;
    }
    else {
        third = 0;
    }
    if (choice4 == "yes") {
        fourth = 8;
    }
    else {
        fourth = 0;
    }
    if (choice5 == "yes") {
        fifth = 16;
    }
    else {
        fifth = 0;
    }

    final = first + second + third + fourth + fifth;
    return final;

}
