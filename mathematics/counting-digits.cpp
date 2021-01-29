#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    printf("Enter a number:");
    cin >> n;
    while (n>0){
        count++;
        n = n/10;
    }
    cout <<"\nCount:"<< count;
    return 0;
}