#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c;
    char d;
    int x,y;
    cin>>a;
    cin>>b;
    x = a.size();
    y = b.size();
    cout<<x;
    cout<<" ";
    cout<<y;
    cout<<"\n";
    c = a+b;
    cout<<c;
    cout<<"\n";
    d = a[0];
    a[0] = b[0];
    b[0] = d;
    cout<<a;
    cout<<" ";
    cout<<b;
    return 0;
}
