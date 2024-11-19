/*
Pattern 12

1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

number space number

*/

#include<bits/stdc++.h>
using namespace std;


void pattern12(int n){
    int sp = 2 * (n - 1);
    for(int i=1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << j << " ";
        }

        for(int j=1; j<=sp; j++){
            cout << "  ";
        }

        for (int j = i; j >= 1; j--){
            cout << j<<" ";
        }

        cout << endl;
        sp -= 2;
    }

}

int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern12(n);
}