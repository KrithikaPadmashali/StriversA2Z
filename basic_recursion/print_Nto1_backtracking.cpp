#include<bits/stdc++.h>
using namespace std;



void backtracking_Nto1(int n,int i=1){
  if (i>n){
    return;
  }
  backtracking_Nto1(n,i+1);
  cout<<i<<" ";
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  backtracking_Nto1(n);
}