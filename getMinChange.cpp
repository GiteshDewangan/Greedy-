#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>

using namespace std;



int getMinChange(vector<int> coins , int v){
    int ans = 0;
    int n = coins.size();
    for(int i = n ; i> = 0 && v>0 ; i){
        if( V > = coins[i]){
            ans += V/coins[i];
            V = V % coins[i];
        }
    }
    
    cout<< ans;
    return ans;
}

int main() {
    vector<int> coins = {1,2,5,10,20,50,10,500,2000};
    int V = 590 ;
    

    return 0;
}
