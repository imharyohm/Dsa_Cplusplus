#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> arr){
    int i=0;
    int e=arr.size()-1;
    while(i<e){
    swap(arr[i],arr[e]);
        i++;
        e--;
    }
    return arr;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int> ans;
    
	int i=n-1;
    int j=m-1;
    
    int carry = 0;
    
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];  
        
        int sum = val1+val2+carry;
        carry = sum/10;
        sum = sum %10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum %10;
        ans.push_back(sum);
        i--;
    }
        while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum %10;
        ans.push_back(sum);
        j--;
    }//jo extra carry bachega sum karne ke baad yusko handel karne ke lea ye loop
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum %10;
        ans.push_back(sum);
    }
    return reverse(ans);
}