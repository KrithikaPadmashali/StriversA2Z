#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n + sum(n - 1);
}

int main()
{
  int n;
  cin >> n;
  int res = sum(n);
  cout << res << " is the number that you get when you add from 1 to " << n;
}
