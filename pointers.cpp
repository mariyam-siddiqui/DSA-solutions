#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 300; 
    int *b = &a;
    char *c = &a;
    cout << *b << *c <<endl;
    *c = 1;
    cout << *b << *c << endl;
    return 0;
}