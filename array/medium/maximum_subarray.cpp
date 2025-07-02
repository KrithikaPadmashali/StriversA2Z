#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int max_so_far = nums[0];
  int curr_max = nums[0];
  int start = 0, end = 0, s = 0;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > curr_max + nums[i]) {
      curr_max = nums[i];
      s = i;
    } else {
      curr_max += nums[i];
    }
    if (curr_max > max_so_far) {
      max_so_far = curr_max;
      start = s;
      end = i;
    }
  }
  // Print the subarray
  cout << "Maximum subarray: ";
  for (int i = start; i <= end; ++i) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return max_so_far;
}
int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = maxSubArray(nums);
    cout << "Maximum subarray sum: " << max_sum << endl;
    return 0;
}