class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int i,j,s1,s2,cnt=0,num;
        vector<int> v;
        for(i=low;i<=high;i++){
            s1=0;
            s2=0;
            num=i;
            while(num){
                v.push_back(num%10);
                num=num/10;
            }
            if(v.size()%2==0){
                for(j=0;j<v.size();j++){
                    if(j<v.size()/2){
                        s1=s1+v[j];
                    }
                    else{
                        s2=s2+v[j];
                    }
                }
                if(s1==s2){
                    cnt++;
                }
            }
            v.clear();

        }
        return cnt;
        
    }
};