#include <iostream>
using namespace std;

// theta(n) aux space and theta(n) time
int factorialRecursive(int n){
    if (n == 1){
        return 1;
    }
    return n * factorialRecursive(n-1);
}

// theta(1) aux space and theta(n) time, So its a better approach
int factorialIterative(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int factorialCountTrailingZero(int n){
    int res = 0;
    for(int i = 5; i <= n; i*=5){
        res += n/i;
    }
    return res;
}

int main(){
    int number;
    cout << "Enter the number:";
    cin >> number;
    cout << "\nFactorial:"<<factorialRecursive(number);
    cout << "\nFactorial Trailing Zeroes:"<<factorialCountTrailingZero(number);
    return 0;
}