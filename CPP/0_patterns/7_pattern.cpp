/*
Pattern 7
        * 
      * * *  
    * * * * * 
  * * * * * * *
* * * * * * * * * 

the mix of spaces and stars
so the spaces are (n-i-1) and (2*i+1) star
*/

#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        for(int j=0; j<2*i+1; j++){
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
    pattern7(n);
}