//
//  main.cpp
//  Max and Min
//
//  Created by Joynal Abadin on 16.10.25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    int max_value = arr[0];
    int min_value = arr[0];
    for (int i = 0; i < 3; i++) {
        max_value = max(max_value,arr[i]);
        min_value = min(min_value,arr[i]);
    }
    cout << min_value << " " << max_value <<endl;
    return 0;
}
