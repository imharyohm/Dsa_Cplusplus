//program to calculate the occurance of the repeated elements in the particular array
#include <iostream>
using namespace std;

int firstOccrance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccrance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[12] = {2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2};
    int odd[5] = {1, 2, 3, 4, 5};

    int result = firstOccrance(even, 12, 3);
    cout << "First Occuranse is at position: " << result<<endl;
    result=lastOccrance(even, 12, 3);
    cout << "last Occuranse is at position: " << result<<endl;
    
    int total = (lastOccrance(even, 12, 3)-firstOccrance(even, 12, 3))+1;
    cout<<endl<<"Total number of occrance: "<<total;
    return 0;
}
