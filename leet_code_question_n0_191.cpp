#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;

        while(n!=0){
            int digit = n%2;
            if(digit==1){
                count++;
            }
            n = n/2;
        }
        cout<<count<<endl;
        return count;
    }
};

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    Solution s; 
    s.hammingWeight(n);
    
    }