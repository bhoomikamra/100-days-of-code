#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> parentheses;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            parentheses.push(c);
        } else {
            if (parentheses.empty() ||
                (c == ')' && parentheses.top() != '(') ||
                (c == ']' && parentheses.top() != '[') ||
                (c == '}' && parentheses.top() != '{')) {
                return false;
            }
            parentheses.pop();
        }
    }

    return parentheses.empty();
}

int main() {
    string parentheses = "{[()]}";
    cout << "Is valid? " << (isValid(parentheses) ? "Yes" : "No") << endl;
    return 0;
}
