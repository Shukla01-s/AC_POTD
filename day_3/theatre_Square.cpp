#include<iostream>
using namespace std;
int minTile(int n,int m,int a){
    int res;
    res=((m+a-1)/a)*((n+a-1)/a);
    return res;
}
int main()
{
    int a;
    a=minTile(6,6,4);
    cout<<a;
    return 0;
}