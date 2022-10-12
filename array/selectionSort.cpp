#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minValue = i;
        for(int j = i+1;j<n ;j++){
            if(arr[j]<arr[minValue])
                minValue = j;
        }
        swap(arr[minValue],arr[i]);
    }
}
//need to know that what is stable and unstable arlgorithm
 
