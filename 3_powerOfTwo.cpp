#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPowerOfTwo(int n){
            bool isTrue = false;
            // while(n!=1){ // since everything break upto 2 and 2 breaks unto 1 so jab 2, 1 me break ho jayega vo mera last iteration hoga vaha loop ko executre krna band kr dunga
            //     if(n%2 == 1){
            //         isTrue = false;
            //         break;
            //     }
            //     n /= 2;
            // }

            if(n==1 || n==2 || n==4 || n==8 || n==16 || n==32 || n==64 || n==128 || n==256 || n==512 || n==1024 || n==2048 || n==4096 || n==8192 || n==16348 || n==32768 || n==65536 || n==131072 || n==262144 || n==542288 || n==1048576 || n==2097512 || n==4194304 || n==8388608 || n==16777216 || n==33554432 || n==67108864 || n==134217728 || n==268435456 || n==536870912 || n==1073741824 ||n==-1 || n==-2 || n==4 || n==-8 || n==16 || n==-32 || n==64 || n==-128 || n==256 || n==-512 || n==1024 || n==-2048 || n==4096 || n==-8192 || n==16384 || n==-32768 || n==65536 || n==-131072 || n==262144 || n==-542288 || n==1048576 || n==-2097512 || n==4194304 || n==-8388608 || n==16777216 || n==-33554432 || n==67108864 || n==-134217728 || n==268435456 || n==-536870912 || n==1073741824 || n==-2147483648){
                isTrue = true;
                // doubt is how the 32 bit integer represent 2^31 decimal number.
                // should it all once. we will see it tomorrow.
            }
            return isTrue;
        }
};

int main(){
    int n;
    cin>>n;
    Solution *s;
    n = pow(2,n);
    cout<<s->isPowerOfTwo(n);
    return 0;
}


/*
class Solution {
public:
    bool isPowerOfTwo(int n){
            bool isTrue = false;
            // while(n!=1){ // since everything break upto 2 and 2 breaks unto 1 so jab 2, 1 me break ho jayega vo mera last iteration hoga vaha loop ko executre krna band kr dunga
            //     if(n%2 == 1){
            //         isTrue = false;
            //         break;
            //     }
            //     n /= 2;
            // }

            if(n==1 || n==2 || n==4 || n==8 || n==16 || n==32 || n==64 || n==128 || n==256 || n==512 || n==1024 || n==2048 || n==4096 || n==8192 || n==16348 || n==32768 || n==65536 || n==131072 || n==262144 || n==524288 || n==1048576 || n==2097152 || n==4194304 || n==8388608 || n==16777216 || n==33554432 || n==67108864 || n==134217728 || n==268435456 || n==536870912 || n==1073741824 ||n==1 || n==2 || n==4 || n==8 || n==16 || n==-32 || n==64 || n==-128 || n==256 || n==-512 || n==1024 || n==-2048 || n==4096 || n==-8192 || n==16384 || n==-32768 || n==65536 || n==-131072 || n==262144 || n==-542288 || n==1048576 || n==-2097512 || n==4194304 || n==-8388608 || n==16777216 || n==-33554432 || n==67108864 || n==-134217728 || n==268435456 || n==-536870912 || n==1073741824 || n==2147483648){
                isTrue = true;
                // doubt is how the 32 bit integer represent 2^31 decimal number.
                // should it all once. we will see it tomorrow.
            }
            return isTrue;
        }
    
};
*/