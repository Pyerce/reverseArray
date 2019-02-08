//
//  main.cpp
//  reverseArray
//
//  Created by Pierce Findlay on 2/7/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//

#include <iostream>
using namespace std;

void revereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    printArray(arr, 4);
    revereseArray(arr, 0, 3);
    cout << "Reversed array is" << endl;
    printArray(arr, 4);
    
    return 0;
}
