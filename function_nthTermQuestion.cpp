#include <iostream>
using namespace std;


//Question of AP
// int nthTerm(int n){
//     int AP = (3*n)+7 ;
//     return AP;
// }


//Question of SetBits
int SetBits(int a , int b){
    int count = 0;
    while(a!=0){
        int n = a&1;
        if(n == 1){
            count++;
        }
        a = a>>1;
    }

    while(b!=0){
        int n = b&1;
        if(n == 1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

int main(){

    // int n ;
    // cout<<"Enter the value n: "<<endl;
    // cin>>n;
    // int nTerm = nthTerm(n);
    // cout<<"nth Term of A.P.  is : "<< nTerm ;

    int a , b;
    cin>>a>>b;
    int Bits = SetBits(a , b);
    cout<<"No of Set Bits : "<<Bits<<endl;


    return 0;
}