//
//  main.cpp
//  Max
//
//  Created by Joynal Abadin on 16.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_value = arr[0];
    for (int i = 0; i < n; i++) {
        max_value = max(max_value, arr[i]);
    }
    cout << max_value << endl;
    return 0;
}
