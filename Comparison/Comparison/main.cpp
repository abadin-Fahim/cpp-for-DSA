//
//  main.cpp
//  Comparison
//
//  Created by Joynal Abadin on 20.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    cin >> a >> op >> b;
    if (op == '>') {
        if (a > b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
    }
    else if (op == '<') {
        if (a < b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
    }
    else if (op == '=') {
        if (a == b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}
