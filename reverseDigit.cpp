#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x!=0){
            int digit = x%10;


            if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
            // we did above case because if ans ki value int_max / 10 se badi hogi toh jab ans se ans ki value niklegi jo ki 10 se multiply ho kr nikalegi toh us ans ki value int ki range se bahar ki ho jayegi kyu ki ans ki value int_max ke divide 10 se badi thi toh ans ki value me 10 ka multiply krenge so that value will go outside of our range.
            return 0;
        }


            ans = (ans*10) + digit;
            x = x/10;
        }
        return ans;
} // changing
};


int main(){
    Solution *s;
    int x;
    cout<<"Enter the value to be reverse ";  
    // changes i do for understanding git 
    cin>>x;
    cout<<"Reverse value of your interger is "<<s->reverse(x)<<endl;
    // skipping the stage area and commiting direcltly

    // changing in the branch feature 1
    return 0;
}