#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>x;
        a[i] = x;
    }  
    for(int j=n-1;j>=0;j--){
        cout<<a[j];
        cout<<" ";
    }
    return 0;
}
