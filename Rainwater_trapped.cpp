/*
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 
Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10

For Input: 
7
8 8 2 4 5 5 1

It's Correct output is: 
4

Practice here: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1 */

/*one thing to note is -> the first and the last element of the array do not 
help to hold the water and hence we exclude them from the logic.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long w=0;
        int lmax[n], rmax[n];
            //for ith bar -> we need largest bar to its left; largest bar to its right
            //subtract it 

        //THIS IS THE O(N^2) SOLUTION. 
        //the crux of the problem is to find the left and right max for the ith block
        //and then subtract the block's height to find the water that can be stored.

        /*int lmax = arr[i];
        for (int i=1; i< n-1; i++)
        {
            for( int j=0; j<i; j++)
            {
                lmax = max(lmax,arr[j]);
            }
            int rmax = arr[i];
            for(int j=i+1; j<n; j++)
            {
                rmax = max(rmax,arr[j]);
            }
            w = w + (min(lmax,rmax) - arr[i]);
        }
        */
        
        lmax[0] = arr[0];
        for(int i=1; i<n; i++)
        {
            lmax[i] = max(lmax[i-1],arr[i]);
        }
        rmax[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            rmax[i] = max(rmax[i+1],arr[i]);
        }
        for(int i=1; i<n; i++)
        {
            w = w + (min(lmax[i],rmax[i]) - arr[i]);
        }
        return w;
    }
}


int main(){
    //DRIVER CODE HERE
    return 0;
}