/*
Pattern 3
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<bits/stdc++.h>
using namespace std;

// function to print pattern 3
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number : \t";
    cin>>n;
    pattern3(n);
}