//
//  main.cpp
//  Simple Calculator
//
//  Created by Joynal Abadin on 14.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long x,y;
    cin >> x >> y;
    long long sum = x + y;
    long long mul = x * y;
    long long sub = x - y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;
    
    return 0;
}

