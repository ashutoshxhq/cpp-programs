#include <iostream>
using namespace std;
// O (min(a,b))
int gcdNaive(int a, int b){
    int res = a>b?b:a;
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

int gcdEuclidean(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        } else {
            b = b-a;
        }
    }
    return a;
}

int gcdEuclideanRecursive(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcdEuclideanRecursive(b,a%b);
    }
}

int main(){
    int a,b;
    cout<<"Enter Valaue of a and b";
    cin >> a >> b;

    cout << "Greatest Common Divisor:"<<gcdNaive(a,b);
    return 0;
}