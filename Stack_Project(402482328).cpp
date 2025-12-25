#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> bracket1, bracket2, bracket3;
    bool isValid = true;
    string inputString;
    
    cin >> inputString;
    
    for (int idx = 0; idx < inputString.length(); idx++) {
        char currentChar = inputString[idx];
        
        if (currentChar == '(') bracket1.push(-1);
        if (currentChar == ')') bracket1.push(1);
        
        if (currentChar == '[') bracket2.push(-1);
        if (currentChar == ']') bracket2.push(1);
        
        if (currentChar == '{') bracket3.push(-1);
        if (currentChar == '}') bracket3.push(1);
    }
    
    int balanceCounter = 0;
    
    while (!bracket1.empty()) {
        balanceCounter += bracket1.top();
        bracket1.pop();
        if (balanceCounter < 0) isValid = false;
    }
    if (balanceCounter != 0) isValid = false;
    
    while (!bracket2.empty()) {
        balanceCounter += bracket2.top();
        bracket2.pop();
        if (balanceCounter < 0) isValid = false;
    }
    if (balanceCounter != 0) isValid = false;
    
    while (!bracket3.empty()) {
        balanceCounter += bracket3.top();
        bracket3.pop();
        if (balanceCounter < 0) isValid = false;
    }
    if (balanceCounter != 0) isValid = false;
    
    cout << (isValid ? "YES" : "NO");
    
    return 0;
}