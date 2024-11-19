/*
Pattern 20
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

stars   + spaces + star
i stars + 2*(n-i) + i stars
*/


#include<bits/stdc++.h>
using namespace std;


void pattern20(int n){
    
    int sp = 2 * n - 2;
    for (int i = 1; i<=2*n-1; i++){
        int st = i;
        if(i>n)
            st = 2 * n - i;
        for (int j = 1; j <= st; j++){
            cout << "* ";
        }

        for (int j = 1; j <= sp; j++){
            cout << "  ";
        }

        for (int j = 1; j <= st; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if(i<n)
            sp -= 2;
        else
            sp += 2;
    }
}


int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern20(n);
}