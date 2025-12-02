class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> rec;
        int i,j=1,sum=0,len=operations.size();
        rec.push_back(stoi(operations[0]));
        for(i=1;i<len;i++){
            if(operations[i]=="D"){
                rec.push_back(2*rec[j-1]);
                j++;
            }
            else if(operations[i]=="C"){
                rec.pop_back();
                j--;
            }
            else if(operations[i]=="+"){
                rec.push_back(rec[j-1]+rec[j-2]);
                j++;
            }
            else{
                rec.push_back(stoi(operations[i]));
                j++;
            }
        }
        for(j=0;j<rec.size();j++){
            sum=sum+rec[j];
        }
        return sum;
        
    }
};