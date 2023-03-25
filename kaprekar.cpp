//KAPREKAR NUMBER
/* 
n = 55
55*55 = 3025 
if the answer is 4 segregate it into 2 parts
and then add
if the sum is equal then n is a kaprekar*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    int sq = n*n;
    int t = sq;
    int c=0;
    while(t>0)
    {
        //COUNT THE NUMBER OF DIGITS IN THE NUMBER
        c++;
        t = t/10;
    }
    t = sq;
    int place = 1;
    if ( c%2 != 0)
    {
        //count of digits in the square is even
        //we need to divide the number in two equal halves 
        //no change to the value of c
        //but if the count of digits is odd
        //we need to divide it in unequal halves;
        c = c+1;
    }
    for (int i = 0; i < (c/2) ; i++)
    {
        place = place * 10;
    }
    int f = t/place;
    int l = t%place;
    //cout << f << " " << l  << " " << place << endl;
    if(f + l == n)
    {
        cout << "Kaprekar number" << endl;
    }
    else {
        cout << "not a kaprekar number" << endl;
    }
    
    return 0;
}