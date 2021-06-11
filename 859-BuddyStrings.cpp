class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        map<char,int> c;
        bool exist=false;
        int a[2];
        int cnt =0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                if(cnt >1)
                    return false;
                a[cnt++]=i;
            }
            if(c[s[i]]++)
                exist = true;
        }
        if(cnt==2&&s[a[0]]==goal[a[1]]&&s[a[1]]==goal[a[0]])
            return true;
        if(cnt==0)
            return exist;
        return false;      
        
    }
};
