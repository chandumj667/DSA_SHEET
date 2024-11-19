/*
Pattern 19
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

Stars + spaces +  stars

*/

#include<bits/stdc++.h>
using namespace std;


void pattern19(int n){
    int sp = 0;
    for (int i = 0; i <= n; i++){

        for (int j = 1; j <= n - i; j++){
            cout << "* ";
        }
        for (int j = 0; j < sp; j++){
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        sp += 2;
        cout << endl;
    }
    sp = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <=i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < sp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        sp -= 2;
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter a number: \t";
    cin >> n;
    pattern19(n);
}