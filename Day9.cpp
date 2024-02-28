#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    string input = "madam";
    cout << "Is palindrome? " << (isPalindrome(input) ? "Yes" : "No") << endl;
    return 0;
}
