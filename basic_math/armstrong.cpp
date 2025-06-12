#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
  int sum=0;
  int original=n;
  while(n!=0){
    int ld=n%10;
    sum=sum+ld*ld*ld;
    n=n/10;
  }
  if (sum==original){
    return 1; // It is an Armstrong number
  } else {
    return 0; // It is not an Armstrong number
  }
}

int main(){
  int n;
  cout<<"Enter a number";
  cin>>n;
  if (armstrong(n)){
    cout<<n<<" is an Armstrong number"<<endl;
  }
  else{
    cout<<n<<" is not an Armstrong number"<<endl;
  }
}