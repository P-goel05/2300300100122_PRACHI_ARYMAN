#include <iostream>
#include <vector>
using namespace std;

//main logic
int DivisionByBS(int dividend, int divisor){
    int s, e, m,ans=0 ;
    s=1;
    e=dividend;
    while(s<=e){
        m=int(s+(e-s)/2);
        if(m*divisor==dividend){
            ans= m;
        }
        if(m*divisor<dividend){ // right side move 
            ans=m; //possible answers 
            s=m+1;
        }
        else{ //left side move 
            e=m-1;
        }
    }
    return ans;
}