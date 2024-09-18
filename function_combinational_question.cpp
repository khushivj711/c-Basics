#include <iostream>
using namespace std;


int factorial(int n){
    int fac = 1;

    for(int i  =1 ; i<=n ; i++){
        fac = fac * i ;
    }
    return fac;
}

int nCr(int n , int r){
    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r) ;

    int ans = num / denom;

    return ans;

}

int main(){

    int n , r ;
    cin>>n >> r;

    cout<<"Answer is : " << nCr(n,r)<<endl;
}