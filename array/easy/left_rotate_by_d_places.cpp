#include <bits/stdc++.h>
using namespace std;
/// Brute force approach
/*
arr[]=[1,2,3,4,5,6,7] d=3
arr[]=[4,5,6,7,1,2,3]->solution
so temp=[1,2,3]
for(int i=d;i<n;i++){
   arr[i-d]=arr[i]
   }
   j=0;
   for(int i=n-3;i<n;i++){
   arr[i]=temp[j];
   j++;
   }
*/

void rotate(vector<int> &nums, int k)
{
  int n = nums.size();
  k = k % n;
  vector<int> temp(k);
  // putting the elements into the temp
  for (int i = 0; i < k; i++)
  {
    temp[i] = nums[i];
  } // o(k)

  for (int i = k; i < n; i++)
  {
    nums[i - k] = nums[i];
  } // o(n-k)

  for (int i = n - k; i < n; i++)
  {
    nums[i] = temp[i - (n - k)];
  } // o(k)
}
// tc->O(N+K) ; SC->O(K)

// method two
/*
reverse(a,a+d)
reverse(a+d,a+n) a is array
reverse(a,a+n)
*/
void rotate_2(vector<int> &nums, int k)
{
  int n = nums.size();
  k = k % n;
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
  reverse(nums.begin(), nums.end());
  // tc->O(2n) sc->o(1)
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
  // rotate(arr, k);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] ;
  // }
  rotate_2(arr, k);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  return 0;
}