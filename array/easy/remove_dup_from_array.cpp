#include <bits/stdc++.h>
using namespace std;

// Rempve duplicate from sorted array
/*
arr[]=[[1,1,2,2,2,3,3]
return 3([1,2,3])
*/
// using 2pointer approach
int removeDuplicates(vector<int> &nums)
{
  // pointer one
  int n = nums.size();
  int i = 0;
  // second pointer which is iterating troughout
  for (int j = 0; j < n; j++)
  {
    if (nums[i] != nums[j])
    {
      nums[i + 1] = nums[j];
      i++;
    }
  }
  return i + 1; // as starting from 0
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int res = removeDuplicates(arr);
  cout << res;
}