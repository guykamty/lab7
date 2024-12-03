#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Fahsai: Sawadee ka...Can you tell me your full name?" << endl;
    cout << "?????: ";
    getline(cin, fullName);
    cout << "Fahsai: Wow!!! " << fullName <<" is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    int studentID, a;
    cout << fullName <<": ";
    cin >> studentID;
    a = (studentID/10000000)-12;

    cout << "Fahsai: I think you may be GEAR "<< a <<". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << fullName <<": ";
    string movie;
    cin.ignore();
    getline(cin, movie);

    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << fullName <<": ";
    string day, g;
    getline(cin, day);

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    getline(cin,g);
    cout << fullName << ": "<<g;
    cout << "Fahsai: 555+ see you "<< day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}