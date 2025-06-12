#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
//euclid's algorithm to find GCD
/*
it states 
gcd(a,b)=gcd(a-b,b) if a>ba
and we do this until a becomes equal to 0 then b is the GCD
*/
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, gcd is a
    }
    return gcd(b, a % b); // Recursive case: gcd of b and remainder of a divided by b
}

int gcd2(int a,int b){
    for(int i=min(a,b);i>=1;i--){
      if (a%i==0 && b%i==0){
        cout<<"GCD is: "<<i<<endl;
        break; // Return the first divisor found, which is the GCD
      }
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD using recursion: " << gcd(a, b) << endl;
    cout<< "GCD using iteration: ";
    gcd2(a, b); // Using the iterative method to find GCD

    return 0;
}