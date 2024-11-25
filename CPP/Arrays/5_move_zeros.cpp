/*
Move zeros to end of the array
*/

#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&vec){
    for(auto i:vec){
        cout << i << " ";
    }
}

void solve(vector<int>&vec, int n){
    int j = -1;
    for (int i = 0; i<n; i++){
        if(vec[i]==0){
            j = i;
            break;
        }
    }
    if(j==-1){
        print(vec);
        return;
    }
    for(int i=j+1; i<n; i++){
        if(vec[i]!=0){
            swap(vec[i], vec[j]);
            j++;
        }
    }
    print(vec);
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