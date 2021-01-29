#include <iostream>
using namespace std;

int reverseNumber(int n){
    int newNumber;
    while(n>0){
        newNumber = newNumber*10 + n%10;
        n /= 10;
    }
    return newNumber;
}

int main(){
    int number;
    cout << "Enter the number:";
    cin >> number;

    if (number == reverseNumber(number)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;
}