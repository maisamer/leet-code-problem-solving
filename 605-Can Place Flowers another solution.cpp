class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt =1;
        int sz = flowerbed.size();
        for(int i=0;i<sz;i++){
            if(!flowerbed[i])
                cnt++;
            else{
                n-=(cnt-1)/2;
                cnt=0;
            }

        }
        n-=(cnt/2);
        return n<=0 ;
        
    }
};
