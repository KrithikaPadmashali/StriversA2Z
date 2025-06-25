#include <bits/stdc++.h>
using namespace std;
// 13 46 24 52 20 9
//  step 1 find the min in the array the swap witht he first position element

// 9 |46 24 52 20 13| step 1

// step 2 excluding the element at the first position you now find the minimum in the rest of the elements in that array then swap it up now with the element in the second position

// 9  13|24 52 20 46| step 2
// 9  13 20|52 24 46| step 3
// 9  13 20 24|52 46| step 4
// 9  13 20 24 46|52| step 5

// The BEST,WORST,AVERAGE TIME COMPLEXITY IS O(n^2)
void selection_sort(int arr[], int n)
{

  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }

    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}