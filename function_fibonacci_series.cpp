#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0 ;
    int b = 1;

    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }

    for(int i = 3 ; i<=n ; i++){
        int nextNumber = a+b;
        a = b ;
        b = nextNumber; 
    }
    return b;
}

int main(){

    int n ;
    cin>>n;
    cout<<"Fibonacci Series : "<<fibonacci(n)<<endl;

    return 0;
}