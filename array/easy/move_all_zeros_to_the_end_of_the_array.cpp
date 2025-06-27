#include <bits/stdc++.h>
using namespace std;

// First approach O(2n)
void moveZeroes1(vector<int> &nums)
{

  // store all non zeros in a temp vector
  vector<int> temp;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    if (nums[i] != 0)
    {
      temp.push_back(nums[i]);
    }
  }

  // now take those temp and put it in the original array

  for (int i = 0; i < temp.size(); i++)
  {
    nums[i] = temp[i];
  }

  // now add 0 uptill n starting from temp.size()

  for (int i = temp.size(); i < n; i++)
  {
    nums[i] = 0;
  }
}

///////////////////////////////////////////////////////////
// second approach using 2 pointer

void moveZeroes2(vector<int> &nums)
{
  int n = nums.size();
  int j = -1;
  // finding the first 0
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == 0)
    {
      j = i;
      break;
    }
  }
  if (j == -1)
    return;
  for (int i = j + 1; i < n; i++)
  {
    if (nums[i] != 0)
    {
      swap(nums[i], nums[j]);
      j++;
    }
  }
}
// yayyyyy!!!!!!!!!
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  moveZeroes2(arr);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}