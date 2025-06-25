#include <bits/stdc++.h>
using namespace std;

// this is only for isSorted checking

bool isSorted(int n, vector<int> a)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    // for checking the rotaion conditin too
    if (a[i] > a[(i + 1) % n])
    {
      count++;
    }
  }
  return count <= 1;
}
// just for sorting if(a[i]<a[i-1]) and for loop from 1
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int res = isSorted(n, arr);
  cout << (res ? "true" : "false");

  return 0;
}