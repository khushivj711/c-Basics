#include <iostream>
using namespace std;


//Question of AP
int nthTerm(int n){
    int AP = (3*n)+7 ;
    return AP;
}
int main(){

    int n ;
    cout<<"Enter the value n: "<<endl;
    cin>>n;
    
    int nTerm = nthTerm(n);
    cout<<"nth Term of A.P.  is : "<< nTerm ;

}