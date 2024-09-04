#include<iostream>
using namespace std;

int main(){
  int a = 5;
  cout<<a;
  
  char ch = 'a';
  cout<<ch<<endl;
  
  bool b = false;
  cout<<b<<endl;

  float f = 1.2;
  cout<< f << endl;

  double d = 1.23;
  cout<<d<<endl;

  int sizea = sizeof(a);
  cout<<"Size of a :" << sizea << endl;

  int sizech = sizeof(ch);
  cout<<"Size of ch :" << sizech << endl;

  int sizeb = sizeof(b);
  cout<<"Size of b :" << sizeb << endl;

  int sizef = sizeof(f);
  cout<<"Size of f :" << sizef << endl;

  int sized = sizeof(d);
  cout<<"Size of d :" << sized << endl;
  
}