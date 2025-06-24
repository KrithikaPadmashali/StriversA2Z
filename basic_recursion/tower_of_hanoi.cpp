#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int one, int two, int three)
{
  if (n == 1)
  {
    cout << one << " " << three << endl;
    return;
  }
  // maving the n-1 disks from 1st stck to second using three as auxilary
  hanoi(n - 1, one, three, two);
  // maving the nth disk from one to third stack
  cout << one << " " << three << endl;
  // moving n-1 disks from two to three
  hanoi(n - 1, two, one, three);
}

int main()
{

  int n;
  cin >> n;
  // printing the number of steps taken
  cout << pow(2, n) - 1 << endl;
  hanoi(n, 1, 2, 3);
  return 0;
}