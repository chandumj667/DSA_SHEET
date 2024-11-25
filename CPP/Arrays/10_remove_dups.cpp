/*
Remove duplicates from sorted array
*/


#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&vec, int k){
    for(int i=0; i<k; i++){
        cout << vec[i] << " ";
    }
}

void solve(vector<int>&vec, int n){
    int i = 0;
    for (int j = 1; j<n; j++){
        if(vec[i]!=vec[j]){
            i++;
            vec[i] = vec[j];
        }
    }
    print(vec, i + 1);
}

int main(){
    int n;
    cout<<"Enter the size of the array: \t";
    cin>>n;

    vector<int> vec(n);
    cout << "Enter " << n << " Elements in to the array in sorted manner: " << endl;
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    solve(vec, n);
}