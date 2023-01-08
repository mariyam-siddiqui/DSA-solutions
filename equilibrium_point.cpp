/*
Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 

practise here: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
https://leetcode.com/problems/find-pivot-index/ */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //DRIVER CODE
    return 0;
}

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int lsum=0, rsum=0;
        int s=0;
        if(n==1) //if there is only one element
        //that is the equilibrium point of that element
        {
            return 1;
        }
        //calculate the sum for the entire array
        for(int i=0; i<n; i++)
        {
            s=s+a[i];
        }
        
        //generate left sum and right sum 
        //check for the condition lsum == rsum
        for(int i=1; i<n-1; i++)
        {
            lsum = lsum + a[i-1];
            rsum = s-lsum-a[i];
            if (lsum == rsum)
            {
                return (i+1);
            }
        }

    //if no equilibrium point is found return -1;
        return -1;
    }

};