#include <iostream>
#include <math.h>
using namespace std;


class Solution {
public:
    int bitwiseComplement(int n) {
        int db = 0 ;
        
        while(n!=0){
            int i = 0;

            int bit = n&1;
            db = (bit * pow(10,i))+ db;
            n = n>>1;
            i++;
        }

        int comp = 0;
        while(db!=0){
            int i = 0;

            int digit =  db%10;
            comp = comp + pow(2,i);

            db = db/10;
            i++;
        }

        
        cout<<comp<<endl;
    }
};


int main(){
    Solution s; 
    s.bitwiseComplement(5);
}