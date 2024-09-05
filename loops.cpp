#include <iostream>
using namespace std;
 int main(){
   // int n ;
   // int i = 1;
   // cin >>n;

   // while(i<=n){
   //   cout<<i<<endl;
   //   i++;
   // }

   //sum of all numbers upto n
   // int n , i =1;
   // int sum = 0;
   // cin>>n;
   // while (i<=n){
   //   sum = sum + i ;
   //   i++;
   // }
   // cout<<sum;


   // sum of all even numbers upto n 
   // int n , i =0;
   //  int sum = 0;
   //  cin>>n;
   //  while (i<=n){
   //    sum = sum + i ;
   //    i=i+2;
   //  }
   //  cout<<sum;


   // given no is prime or not
   int n ;
   cin>>n;
   int i = 2;
   while(i<n){
     if(n%i==0){
       cout<<"not prime"<<endl;
     }
     else{
       cout<<"prime"<<endl;
     }
     i++;
   }
 }