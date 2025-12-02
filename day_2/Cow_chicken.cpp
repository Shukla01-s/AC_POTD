#include<iostream>
using namespace std;
void cnt(int n)
{
    int total=0,i,j;
    for(i=0;i<=n/4;i++)
    {   
        for(j=0;j<=n/2;j++){
            if(4*i+2*j==n){
                total++;    
           }
        }    
    }
    cout<<total;
}

int main()
{
    int t,i;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
        cnt(a[i]);
        cout<<endl;
    }
    return 0;

}