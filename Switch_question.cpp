#include <iostream>
using namespace std;

int main(){

    int amount , deno =0 ;
    int count100 =0 , count50 = 0 , count20 = 0 , count1=0;
    cout<<"Enter total amount"<<endl;
    cin>>amount;

    if(amount>=100){
        deno = 100;
    }
    else if(amount>=50){
        deno = 50;
    }
    else if(amount>=20){
        deno = 20;
    }
    else if(amount>=1){
        deno = 1;
    }

    switch (deno)
    {
    case 100: count100 = amount / 100;
            amount = amount % 100;

    case 50:  count50 = amount / 50;
            amount = amount % 50;

    case 20: count20 = amount / 20 ;
        amount = amount % 20;
    
    case 1: count1 = amount / 1;
        amount = amount % 1;

    }

    cout<<"100 rupees notes: " <<count100 << endl;
    cout<<"50 rupees notes: " <<count50 << endl;
    cout<<"20 rupees notes: " <<count20 << endl;
    cout<<"1 rupees notes: " <<count1 << endl;


    if(amount == 0 ){
        cout<<"correct calculation" << amount;
    }
    else{
        cout<<"incorrect calculation" << amount;
    }

    return 0 ;
}