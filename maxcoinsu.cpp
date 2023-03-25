/*
Determine the minimum number of coins to give while making change
n = 36
using coins of denominations [1,5,10,20]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*cout << "enter the amount " << end;
    int p;
    cin >> p;
    int n; //denomination of the coins 
    cout << "enter the number of denominations array" << endl;
    cin >> n ;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }*/
    int p = 36;
    int c[] = {20, 10, 5, 1};
    int n = 4;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ( p > c[i])
        {
            p = p - c[i];
        }
        count++;
    }
    cout << count << endl;
    return 0;
}