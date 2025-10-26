//
//  main.cpp
//  Smallest Pair
//
//  Created by Joynal Abadin on 25.10.25.
//

#include <iostream>
#include <climits>
using namespace std;

int main(int argc, const char * argv[]) {
    int no_of_test_case;
    cin >> no_of_test_case;
    while (no_of_test_case--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                int val = arr[i] + arr[j] + j - i;
                mn = min (mn, val);
            }
        }
        cout << mn << endl;
    }
    
    return 0;
}
