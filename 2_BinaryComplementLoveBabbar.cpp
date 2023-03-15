#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int bitwiseComplement(int n){
            if(n == 0){
                return 1;
            }
            int mask = 0;
            int m = n;
            n = ~n;
            while(m!=0){
                mask = (mask << 1) | 1; // left shift and or with 1 jisse 1 aa jayega left most bit me 0 ki place par
                m = m>>1;
            }

            int ans = n&mask;
            return ans;
        }
};

int main(){
    Solution *s;
    int n;
    cin>>n;
    cout<<s->bitwiseComplement(n);
    return 0;
}