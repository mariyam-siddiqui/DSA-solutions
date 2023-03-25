/*maximum sum of the subarray
ip: {-2,-3, 4, -1, -2, 1, 5,-3}
op- 7
[4, -1, -2, 1, 5]

KADANE'S ALGORITHM:
maintain a variable max that stores the maximum contiguous sum of the subarray 
and there is a variable sum (here s) that maintains the sum of the subarry so far.
Everytime there is a positive value of sum which is greater than the current max 
max = sum. If sum becomes negative we need to reset sum s = 0;

INTUITION: The subarray with negative sum is discarded 
we carry subarray till it gives a positive sum

practice here: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*int n;
    cout << "Enter the number n" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the numbers now" << endl;*/

    int n=8;
    int arr[] = {-2,-3, 4, -1, -2, 1, 5,-3};
    int s = 0, max =0;
    /*for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }*/
    for (int i = 0; i < n; i++)
    {
        s = s + arr[i];
        if(s>max)
        {
            max = s;
        }
        if(s<0)
        {
            s = 0;
        }
    }
    
    cout << max << endl;
    
    
    return 0;
}