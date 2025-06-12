#include<bits/stdc++.h>
using namespace std;

void backtracking_1toN(int i,int n){
  if (i<1){
    return;
  }
  backtracking_1toN(i-1,n);
  cout<<i<<" ";
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  backtracking_1toN(n,n);
}