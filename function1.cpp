#include <iostream>
using namespace std;

//1 = Even 
// 0  = Odd
bool isEven(int a){
    if(a%2==0)
        return 1;
    
    return 0;
}
int main(){
    int num ;
    cin >> num;

    // bool b= isEven(num);
    // cout<<b;

    if(isEven(num)){
        cout<<"Number is even "<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }

}