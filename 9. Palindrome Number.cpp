class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int a[500];
        int cnt=0;
        while(x){
            a[cnt] = x%10;
            x/=10;
            cnt++;
        }
        int m = cnt/2;
        int l= m-1,r;
        if(cnt % 2)
            r = m+1;
        else
            r = m;
        for(int i=0;i<cnt/2;i++){
            if(a[l]!=a[r])
                return false;
            l--,r++;
        }
        return true;

    }
};
