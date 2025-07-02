#include <bits/stdc++.h>
using namespace std;

// Brute force approach
vector<int> intersection_brute(vector<int> &arr1, vector<int> &arr2)
{
  // ordered set
  int n = arr1.size();
  int m = arr2.size();
  int visited[m] = {0};
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr1[i] == arr2[j] && visited[j] == 0)
      {
        ans.push_back(arr1[i]);
        visited[j] = 1;
        break;
      }
      if (arr2[j] > arr1[i])
        break;
    }
  }
  return ans;
}
// Tc=O(m*n);
// sc=O(m*n)
////////////////////////////////////
vector<int> intersection_optimal(vector<int> &arr1, vector<int> &arr2)
{
  int n = arr1.size();
  int m = arr2.size();
  int i = 0, j = 0;
  vector<int> ans;
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      j++;
    }
    else
    {
      ans.push_back(arr1[i]);
      i++;
      j++;
    }
  }
  return ans;
}
// tc->o(m+n)
// sc->o(1)
///////////////////////////////////////
int main()
{
  int n;
  cin >> n;
  vector<int> arr1(n);
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  int m;
  cin >> m;
  vector<int> arr2(m);
  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  vector<int> res = intersection_optimal(arr1, arr2);
  for (auto &it : res)
  {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}