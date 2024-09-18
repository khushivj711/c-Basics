#include <iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = '1';

    cout<<endl;

    // switch (ch)
    // {
    // case 1: cout<<"First"<<endl;
    //     /* code */
    //     break;
    // case '1' : cout<<"Second"<<endl;
    //     break;
    // default:   cout<<"It is default case"<<endl;
        
    //         }


    switch (ch)
    {
    case 1: cout<<"First"<<endl;
        /* code */
        break;
    case '1' : 
                switch (num)
                {
                case 1: cout<<"Value of num is : "<<num<<endl;
                    /* code */
                    break;
                }
        break;
    default:   cout<<"It is default case"<<endl;
        
            }

}