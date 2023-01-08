/*Given an array A of positive integers. 
Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader.

Example: Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2*/

/*Find the question here: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1 */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        int k=1;
        int max = a[n-1];
        ans.emplace(ans.begin(),max); // THE LAST ELEMENT IS ALWAYS THE LEADER
        for( int i=n-2; i>=0; i--)
        {
            //running a loop from behind as we know the leader is the last element
            //compare the elements to find the largest element from behind
            //which is automatically the leader. 
            if (a[i] >= max)
            {
                ans.emplace(ans.begin()+k,a[i]);
                max = a[i];
                k++;
            }
            
        }
        reverse(ans.begin(), ans.end()); // REVERSE THE VECTOR
        return ans;
    
    }
};

int main(){
    //DRIVER CODE GOES HERE 
    return 0;
}

 