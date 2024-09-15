#include <iostream>
using namespace std;
int main(){
    // int n ;
    // cout<< " Enter the value of n "<<endl;
    // cin>>n;   
    // cout<<"Printing count from 1 to n "<<endl;
    // for(int i = 1 ; i<=n ; i++){
    //     cout<<i<<endl;
    // }


    // int i = 1;
    // for( ; ; ){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }


    // for(int a = 0 , b=1; a >= 0 && b>=1 ; a--,b--){
    //     cout<<a<<" "<<b<<endl;
    // }


//     int sum=0;
//     for(int i = 1;i<=n;i++){
//         sum = sum+i;
//     }
//     cout<<sum<<endl;


    //Fibonacci series
    // int n  = 10;

    // int a = 0;
    // int b = 1;

    // cout<<a <<" "<<b<<" ";
    // for(int i = 1; i<=n ; i++){
    //    int nextNumber = a+b ;
    //    cout<<nextNumber<<" ";
    //    a = b;
    //    b = nextNumber; 
    // }


    //Prime Number
    int n ;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    // for (int i = 2; i<n ; i++){
    //     if(n%i==0){
    //         cout<<"Not Prime Number"<<endl;
    //         break;
    //     }
    //     else{
    //         cout<<"Prime Number"<<endl;
    //         break;
    //     }
    // }

    bool isPrime=1;
    for (int i = 2; i<n ; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout<<"Not a Prime Number"<<endl;
    }
    else{
        cout<<"is a Prime Number"<<endl;
    }
}


