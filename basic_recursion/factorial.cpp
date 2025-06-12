#include<bits/stdc++.h>
using namespace std;


int fact(int n){
  if (n==1){
    return 1;
  }
  return n*fact(n-1);
}

int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  int result=fact(n);
  cout<<"The result is: "<<result;
}