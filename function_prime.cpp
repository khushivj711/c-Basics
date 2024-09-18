#include <iostream>
using namespace std;

//1= Prime no.  
//0 = not a prime no.
bool prime(int n){

    for(int i = 2 ; i<n ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n ;
    cin>>n;

    if(prime(n)){
        cout<<"Is a prime no. "<<endl;
    }
    else{
        cout<<"Not a prime no."<<endl;
    }
    return 0;
}