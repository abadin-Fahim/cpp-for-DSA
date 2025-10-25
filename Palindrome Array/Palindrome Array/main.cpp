//
//  main.cpp
//  Palindrome Array
//
//  Created by Joynal Abadin on 25.10.25.
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
    int left = 0, right = n - 1;
    bool isPalindrome = true;
    while (left < right) {
        if (arr[left] != arr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    if (isPalindrome) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
