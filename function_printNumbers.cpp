#include <iostream>
using namespace std;

// int printNumbers(int n ){
//     int sum = 0;
//     for(int i = 0 ; i<=n ; i++){
//         sum = sum + i;
//     }
//     return sum;
// }

void printCounting(int n ){
    for (int i = 1 ; i<=n ; i++){
        cout<<i<<" ";
    }
}

int main(){
    int n ;
    cin>>n;

    printCounting(n);
   
   return 0;
}