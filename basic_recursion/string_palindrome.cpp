#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int n,int i=0){
    if(i >= n/2){
    return true;
  }
  if(s[i]!=s[n-i-1]){
    return false;
  }

  return palindrome(s,n,i+1);
}

int main(){
  string s;
  cout<<"Enter a string: ";
  cin>>s;
  int n=s.length();
  if (palindrome(s,n)){
    cout<<"The string is a palindrome."<<endl;
  }
  else{
    cout<<"This string is not a palindrome."<<endl;
  }
  }