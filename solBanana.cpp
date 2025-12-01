#include<iostream>
using namespace std;
int main()
{
    int i,k,w,n,a=1,sum=0;
    cin>>k>>n>>w;
    while(1){
        if(a<=w){
            sum=sum+a*k;
            a++;
        }
        else
            break;
    }
    if(sum<n)
        cout<<"0";
    else
        cout<<sum-n;
    return 0;
}