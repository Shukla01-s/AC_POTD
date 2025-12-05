int findGCD(vector<int>& nums) {
        int i;
        int a=*min_element(nums.begin(),nums.end()),b=*max_element(nums.begin(),nums.end());
        b=b%a;
        for(i=a;i>=1;i--){
            if((a%i==0)&&(b%i==0))
                break;
        }
        return i;
        
    }