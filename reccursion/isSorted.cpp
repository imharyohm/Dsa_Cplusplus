#include <iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[1] < arr[0])
        return false;
    else
    {
        issorted(arr + 1, size - 1);
    }
}
int Sum(int arr[], int size)
{

    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

    int remainingPart = Sum(arr+1, size-1);
    int  sum = arr[0] + remainingPart;
    return sum;
    
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    if (issorted(arr, 5))
        cout << "Array is sorted"
             << " ";

    else
        cout << "Not sorted";

    cout << Sum(arr, 5);
}