//
//  main.cpp
//  Mathematical Expression
//
//  Created by Joynal Abadin on 20.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c;
    char op, eq_op = '=';
    cin >> a >> op >> b >> eq_op >> c;
    if (op == '+') {
        if (a + b == c) {
            cout << "Yes" << endl;
        }
        else cout << a + b << endl;
    }
    else if (op == '-') {
        if (a - b == c) {
            cout << "Yes" << endl;
        }
        else cout << a - b << endl;
    }
    else if (op == '*') {
        if (a * b == c) {
            cout << "Yes" << endl;
        }
        else cout << a * b << endl;
    }
    return 0;
}
