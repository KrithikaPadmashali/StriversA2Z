#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0,maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=0;
               
            }
        }
        return maxi;
    }

    int main(){
      vector<int> nums={1,1,0,1,1,1};
      cout<<findMaxConsecutiveOnes(nums)<<endl; // Output: 3
      return 0;
    }