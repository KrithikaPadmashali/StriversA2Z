#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fibo(n - 1) + fibo(n - 2);
}

int main()
{

  int n;
  cin >> n;
  int res = fibo(n);
  cout << "The fibonacci number of " << n << " is " << res;
  return 0;
}
