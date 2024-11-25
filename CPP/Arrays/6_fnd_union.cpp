/*
find the union of two arrays
*/

#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&vec){
    for(auto i:vec){
        cout << i << " ";
    }
}

void solve(vector<int>&vec1, vector<int>&vec2, int n, int m){
    int i=0, j=0;
    vector<int>ans;
    while(i<n && j<m){  
        if(vec1[i]<=vec2[j]){
            if(ans.size()==0 || ans.back()!=vec1[i]){
                ans.push_back(vec1[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=vec2[j]){
                ans.push_back(vec2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(ans.back()!=vec1[i]){
            ans.push_back(vec1[i]);
        }
        i++;
    }

    while (j < m){
        if (ans.back() != vec2[j]){
            ans.push_back(vec2[j]);
        }
        j++;
    }
    print(ans);
}


int main(){
    int n, m;
    cout << "Enter the size of two arrays: \t";
    cin >> n >> m;
    vector<int> vec1(n);
    vector<int> vec2(m);
    for (int i = 0; i < n; i++){
        cin >> vec1[i];
    }

    for (int i = 0; i < m; i++){
        cin >> vec2[i];
    }

    solve(vec1, vec2, n, m);
}