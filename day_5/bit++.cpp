#include<iostream>
using namespace std;
int main(){
    int i,n,res=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if((s=="++X")||(s=="X++")){
            res=res+1;
        }
        else{
            res=res-1;
        }
    }
    cout<<res;
    return 0;
}