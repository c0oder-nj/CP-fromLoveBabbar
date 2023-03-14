#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        vector<int> v;
        int rem = 0;
        while(n!=0){
            rem = n%2;
            v.push_back(rem); // automatically helps me to find out reverse of binary number
            n /= 2;
        }

        // reverse(v.begin(),v.end());
        // cout<<v.size()<<endl;
        // for(auto i:v){
        //     cout<<i;
        // }
        // cout<<endl;

        // for(int i=0; i<v.size(); i++){
        //     if(v[i] == 1){
        //         v[i] = 0;
        //     }else{
        //         v[i] = 1 ;
        //     }
        // }

        int ans = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] == 0){
                int val = pow(2,i);
                ans += val;
            }
        }
        return ans;
    }
};

int main(){

    Solution s;
    int n;
    cin>>n;
    cout<<s.bitwiseComplement(n);
    return 0;
}