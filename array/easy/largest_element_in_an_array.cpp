#include <bits/stdc++.h>
using namespace std;

// Brute
/*
sorting then taking the arr ele off position n-1
*/
// Better
/*nothing*/

// optimal
/* seting largest=arr[0] then going through all the elements in the array  while checking iflargest or not */
int largest_element_in_array(int arr[], int n)
{

  int largest = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int res = largest_element_in_array(arr, n);
  cout << res;

  return 0;
}