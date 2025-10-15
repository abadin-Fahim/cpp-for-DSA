//
//  main.cpp
//  Capital or Small or Digit
//
//  Created by Joynal Abadin on 12.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char x;
    cin >> x;
   
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
        cout << "ALPHA" << endl;
        if (x >= 'a' && x <= 'z') {
            cout << "IS SMALL" << endl;
        }
        else{
            cout << "IS CAPITAL" << endl;
        }
    }
    else{
        cout << "IS DIGIT" << endl;
    }

    return 0;
}

