class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> res;
        int i,j,k;
        for(i=0;i<nums1.size();i++){
            int temp=nums1[i];
            for(j=0;j<nums2.size();j++){
                if(temp==nums2[j]){
                    res.insert(temp);
                    break;
                }    
            }
            if(j!=nums2.size()){
                    continue;
            }
            else{
                for(k=0;k<nums3.size();k++){
                    if(temp==nums3[k]){
                        res.insert(temp);
                    }
                }
            }
    
        }
        for(j=0;j<nums2.size();j++){
            for(k=0;k<nums3.size();k++){
                if(nums2[j]==nums3[k]){
                        res.insert(nums2[j]);
                    }
                }
            }
        vector<int> r(res.begin(),res.end());
        return r;
        
    }
   
};