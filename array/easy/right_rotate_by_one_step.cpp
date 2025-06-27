#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums)
{
  int n = nums.size();
  if (n == 0) return;
  int temp = nums[n - 1];
  for (int i = n - 1; i > 0; i--)
  {
    nums[i] = nums[i - 1];
  }
  nums[0] = temp;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  rotate(arr);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}