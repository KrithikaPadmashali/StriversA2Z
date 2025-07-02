#include<bits/stdc++.h>
using namespace std;


    int singleNumber(vector<int>& nums) {
        //better
        /*
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto& it:freq){
            if (it.second==1){
                return it.first;
            }
        }
        return -1;
        */
        //o(n) optimal
        int n=nums.size();
        int xorr =0;
        for(int i=0;i<n;i++){
            xorr^=nums[i];
        }
        return xorr;
    }

    int main(){
        vector<int> nums={4,1,2,1,2};
        cout<<singleNumber(nums)<<endl; // Output: 4
        return 0; 
    }

