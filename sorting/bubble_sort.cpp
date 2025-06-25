#include <bits/stdc++.h>
using namespace std;

// So you swap everything and get the largest element at the end and go on doing that so here you want the largest element at the end
// worst /average complexity =O(n^2); if no swaps done i need not go and check again for all the elements then we can say that it is already ordered so best case O(n)
void bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int didSwap = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0)
    {
      break;
    }
    cout << "runs" << endl; // it will never be executed if we break out when we have no swaps done after the first run through
  }
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
  bubble_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}