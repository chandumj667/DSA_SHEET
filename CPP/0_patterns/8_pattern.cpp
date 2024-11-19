/*
Pattern 8
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *



the mix of spaces and stars
so the spaces are <i and (2*n - (2*i+1)) star
*/

#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j<2*n -(2*i+1); j++){
            cout << "* ";
        }
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern8(n);
}