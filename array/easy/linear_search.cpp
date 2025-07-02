#include <bits/stdc++.h>
using namespace std;

/*
In linear search you must find the position of the first occurance of an element .
so if arr[]=[6,7,8,4,1] nums=4
then acc to zero based indexing the out put needs to be
output->3 else return -1
*/
// First occurance
int linearSerach_1st_occurance(vector<int> nums, int k)
{
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == k)
    {
      return i;
      break;
    }
  }
  return -1;
}
// if asked for last occurance
int linearSerach_last_occurance(vector<int> nums, int k)
{
  int n = nums.size();
  for (int i = n - 1; i >= 0; i--)
  {
    if (nums[i] == k)
    {
      return i;
      break;
    }
  }
  return -1;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int k;
  cin >> k;
  int res = linearSerach_last_occurance(arr, k);
  cout << res;
}