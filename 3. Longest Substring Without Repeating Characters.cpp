class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int>m;
        int pnt =0,longSequence =0;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]>=pnt+1){
                pnt = m[s[i]];
                m[s[i]] = i+1;
                
            }else{
                m[s[i]]=i+1;
                longSequence=max(longSequence,i-pnt+1);
            }
        }
        return longSequence;
    }
};
