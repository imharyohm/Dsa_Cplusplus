#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int i = 0;
        sort(arr.begin(), arr.end());
        vector<int> ans;
        while (i < arr.size())
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i = i + count;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
                return false;
        }
        return true;
    }
};
int main(){
    Solution o1;
    vector<int>arr(10);
    int n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<10;i++){
        cin>>n;
        arr.push_back(n);
    }
    
    cout<<o1.uniqueOccurrences(arr);

    
}