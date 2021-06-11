class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]=i; 
        }
        if(m.size()>=3){
            auto it_fwd = m.rbegin();
            advance(it_fwd, 2); 
            return it_fwd->first; 
        }else{
            return m.rbegin()->first;
        }
    }
};
