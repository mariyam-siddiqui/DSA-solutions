/*The cost of stock on each day is given in an array A[] of size N. 
Find all the segments of days on which you buy and sell the stock so that in between those days your profit is maximum.

Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output:
1

Practise here: https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1

*/

/*Concept is to find the local minima
and From there, iterate and see */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int a=0; //We let a variable and assume this is the lowest price
        vector<vector<int>> ans;
        for (int i=0; i<n; i++)
        {
            //check if price is lowest
            if(A[i]<=A[a]) //if the current price is less than or equal to the day stock has to be bought
            {
                a=i; //Buy the stock at the lowest value 
            }
            else //if the stock is higher than the lowest value possible
            {
                ans.push_back({a,i}); //Sell the stock.
                a=i;
            }
        }
        return ans;
    }
};

int main(){
    //DRIVER CODE HERE
    return 0;
}