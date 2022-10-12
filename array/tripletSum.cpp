#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>>ans;
	for(int i=0;i<arr.size()-1;i++){
        for(int k=i+1;k<arr.size();k++){
            for(int j=k+1;j<arr.size();j++){
                if((arr[i]+arr[j]+arr[k]==K)&&(k<arr.size())){
                    vector<int>temp;
                    temp.push_back(min(arr[i],arr[j],arr[k]));
                    temp.push_back(max(arr[i],arr[j],arr[k]));
                    ans.push_back(temp);
                    
                }
            }
        }
    }
    return ans;
}