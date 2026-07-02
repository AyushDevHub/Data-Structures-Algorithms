#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        } else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            
        }
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    return 0;
}