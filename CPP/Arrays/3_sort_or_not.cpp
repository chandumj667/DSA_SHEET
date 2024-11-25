/*
Check if array is sorted or not
*/

#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>&vec, int n){
    bool flag = true;
    for (int i = 1; i < n; i++){
        if(vec[i-1]>vec[i]){
            flag = false;
        }
    }
    if(flag)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
}

int main(){
    int n;
    cout << "Enter the size of the array: \t";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    solve(vec, n);
}