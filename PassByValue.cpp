#include <iostream>
using namespace std;

void dumy(int n ){
    n++;
    cout<<"Number n is : "<<n<<endl;
}

int main(){
    int n ;
    cin>>n;

    dumy(n);
    cout<<"First Number n is :"<<n<<endl;
    return 0;
}