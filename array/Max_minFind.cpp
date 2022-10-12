#include <iostream>
using namespace std;
int getMax(int arr[], int n)
{
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
} 

int getMin(int arr[], int n)
{
    int mini = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]); // program have self created function for max and min.
        //  if(arr[i]<min){
        //    min=arr[i];
        // }
    }
    return mini;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    cout << "Enter the element of array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The Maximium number is" << getMax(arr, size) << endl;
    cout << "The Minimium number is" << getMin(arr, size);
}