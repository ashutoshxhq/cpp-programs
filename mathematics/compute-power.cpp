#include <iostream>
using namespace std;

// Basic approach of calculation power O(n)
int calculatePowerNaive(int n, int p){
    int res = 1;
    for(int i=0;i<p;i++){
        res *= n;
    }
    return res;
}

// Slightly better approach but aux space and time complexity is theta(log n) 
int calculatePowerRecursive(int n, int p){
    if(p == 0) 
        return 1;
    int res = calculatePowerRecursive(n,p/2);
    res = res * res;
    if(p%2 == 0) 
        return res;
    else 
        return res*n;
}

// Best approach for calculating power O(log n) and aux(1)
int calculatePowerIterative(int n, int p){
    int res = 1;
    while(p>0){
        if(p%2 != 0){
            res = res*n;
        }
        n = n*n;
        p = p/2;
    }
    return res;
}


int main(){
    int number,power;
    cout << "Enter the number:";
    cin>>number;
    cout << "Enter the power:";
    cin>>power;
    cout <<number<< "^"<<power<<":"<<calculatePowerIterative(number,power);
    return 0;
}