#include<bits/stdc++.h>
using namespace std;
//Brute Approach O(N^2) time complexity and O(1) space complexity
vector<int> twoSum_brute(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

//Better Approach  O(NLOG(N)) time complexity and O(N) space complexity
//And this is the optima solution for position as result;
vector<int> twoSum_better(vector<int>& nums, int target) {

map<int,int> mapp;
for(int i=0;i<nums.size();i++){
  int a= nums[i];
  int more=target-a;
  if(mapp.find(more)!=mapp.end())
{
  return {mapp[more],i};
}
mapp[a]=i;
}
return {};

}

//when the answer is interms of YES and NO  o(N)+O(NLOG(N)) time complexity and O(1) space complexity
string twoSum_exists(vector<int>& nums, int target) {
   int n= nums.size();
    int left=0,right=n-1;
    sort(nums.begin(),nums.end());
   
    while(left<right){
      int sum=nums[left]+nums[right];
      if(sum==target){
        return "YES";
      }
      else if(sum<target){
        left++;
      }
      else{
        right--;
      }
    }
    return "NO";
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;   
    vector<int> result_brute = twoSum_brute(nums, target);
    if (!result_brute.empty()) {    
        cout << "Brute: Indices found: " << result_brute[0] << ", " << result_brute[1] << endl;
    } else {
        cout << "Brute: No indices found." << endl;
    }   
    vector<int> result_better = twoSum_better(nums, target);
    if (!result_better.empty()) {    
        cout << "Better: Indices found: " << result_better[0] << ", " << result_better[1] << endl;
    } else {
        cout << "Better: No indices found." << endl;
    }     
    string result_exists = twoSum_exists(nums, target);
    cout << "Exists: " << result_exists << endl;      
    return 0;
}