#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    // int age;
    // cin>> age;

    // if(age>18){
    //     cout<<"yes ! you are an adult" <<endl;
    // }
    // else{
    //     cout<<"you are not adult" ;
    // }

    // int marks;
    // cin >> marks;
    // if (marks < 25)
    // {
    //     cout<<"F";
    // }
    // else if (marks<=44)
    // {
    //     cout<<"E" ;
    // }
    // else if (marks<=44)
    // {
    //     cout<<"E" ;
    // }
    // else if (marks<=44)
    // {
    //     cout<<"E" ;
    // }else if (marks<=44)
    // {
    //     cout<<"E" ;
    // }
    
    
    int age;
    cin>>age;
    if (age < 18)
    {
        /* code */
        cout<<"Not eligible for job";
    }
    else if (age >= 18 )
    {
        /* code */
        cout<<"eligible for job" ;
    }
    else if (age >= 55 && age <=57 )
    {
        /* code */
        cout<<"eligible for job , but retirement soon." ;
    }
    else if (age > 57 )
    {
        /* code */
        cout<<"retirement time" ;
    }
    
    


    return 0;
}