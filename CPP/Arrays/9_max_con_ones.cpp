/*
Find the maximum consecutive ones in the array
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&vec, int n){
    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(vec[i]==1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter size of the array :\t";
    cin>>n;
    vector<int>vec(n);
    cout << "Enter " << n << " elements in to the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int maxi = solve(vec, n);
    cout << "Maximum consecutive ones in the array: '" << maxi << "'";
}