/*
Pattern 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <bits/stdc++.h>
using namespace std;

// function to print pattern5
void pattern6(int n)
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number : \t";
    cin >> n;
    pattern6(n);
}