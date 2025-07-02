#include <bits/stdc++.h>
using namespace std;


 int missingNumber(vector<int>& nums) {
        /*
        //Brute  tc->o(n*n) sc->o(1)
        int n=nums.size();
        for(int i=0;i<=n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if (flag==0){
                return i;
            }
        }
       return -1;//compiler warning 
    //Tc->O(n*n)  sc->o(1)
    */
    //better  tc->o(n)+o(n) sc->o(n)
    /*
    int n=nums.size();
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<=n;i++){
        if (hash[i]==0){
            return i;
            
        }
    }
    return -1;
    */
    //optimal 1)O(n) O(1)
    /*
    int n=nums.size();
    int sum=(n*(n+1))/2;
    int s1=0;
    for(int i=0;i<n;i++){
        s1=s1+nums[i];
    }
    return (sum-s1);
    */
    //optimal 2)best 
    int n=nums.size();
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor1^=(i+1);
        xor2^=nums[i];
    }
    
    return xor1^xor2;
    }

int main() {
    vector<int> nums = {3, 0, 1}; // Example input
    cout << "The missing number is: " << missingNumber(nums) << endl;
    return 0;
}