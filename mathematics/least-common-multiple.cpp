#include <iostream>
using namespace std;

// time Complexity O(a*b- max(a,b))
int lcmNaive(int a, int b){
    int res = a>b?a:b;
    while(true){
        if(res%a == 0 && res % b ==0){
            return res;
        }
        res++;
    }
    return res;
}

// time complexity O (log(min(a,b)))
int gcdEuclideanRecursive(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcdEuclideanRecursive(b,a%b);
    }
}

// time complexity O (log(min(a,b)))
int lcm(int a, int b){
    return a*b/gcdEuclideanRecursive(a,b);
}


int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin >> a;
    cin >> b;
    cout <<"LCM:"<<lcm(a,b);
    return 0;
}