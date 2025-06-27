#include <bits/stdc++.h>
using namespace std;
// O(n) space and time complexity
void rotate(vector<int> &nums)
{
  int n = nums.size();
  int temp = nums[0];
  for (int i = 1; i < n; i++)
  {
    nums[i - 1] = nums[i];
  }
  nums[n - 1] = temp;
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
  {
    cout << arr[i] << endl;
  }
}