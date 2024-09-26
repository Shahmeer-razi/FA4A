//type your assigmnet code here 
#include <iostream>
#include <string>

using namespace std;

int ctr; 
char ch;
string str; 

void state1();
void state2();
void state3();
void state4();

int main()
{
    do {
        cout << "String: ";
        cin >> str; 
        if (str != "quit") {
            ctr = 0; 
            state1();
            cout << endl; 
        }
    } while (str != "quit"); 
    return 0; 
}

void state1()
{
    if (ctr >= str.length()) {
        cout << "String Rejected" << endl; 
        return; 
    }
    
    ch = str.at(ctr++);
    if (ch == 'a') {
        state2();
    } else if (ch == 'b') {
        state4();
    } else {
        cout << "Invalid character '" << ch << "' in the input string" << endl; 
    }
}

void state2()
{
    if (ctr >= str.length()) {
        cout << "String Rejected" << endl; 
        return; 
    }
    
    ch = str.at(ctr++);
    if (ch == 'a') {
        state2();
    } else if (ch == 'b') {
        state3();
    } else {
        cout << "Invalid character '" << ch << "' in the input string" << endl; 
    }
}

void state3()
{
    if (ctr >= str.length()) {
        cout << "String Accepted" << endl; 
        return; 
    }
    
    ch = str.at(ctr++);
    if (ch == 'a') {
        state2();
    } else if (ch == 'b') {
        state3();
    } else {
        cout << "Invalid character '" << ch << "' in the input string" << endl; 
    }
}

void state4()
{
    if (ctr >= str.length()) {
        cout << "String Rejected" << endl; 
        return; 
    }
    
    ch = str.at(ctr++);
    if (ch == 'a') {
        state4();
    } else if (ch == 'b') {
        state4();
    } else {
        cout << "Invalid character '" << ch << "' in the input string" << endl; 
    }
}
