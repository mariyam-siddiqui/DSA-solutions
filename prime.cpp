#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1 || n==0)
    {
        return false;
    }
    for(int i=2 ;i< n ;i ++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    bool arr[n];
    for(int i=1; i<=n; i++)
    {
       arr[i] = isPrime(i);
    } 
    for(int i=0; i<n; i++)
    {
        if(arr[i] == true)
            cout << i << endl;
    }
    return 0;
}