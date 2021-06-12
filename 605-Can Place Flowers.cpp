class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt =0;
        int sz = flowerbed.size();
        for(int i=0;i<sz;i++){
            if(flowerbed[i])
                continue;
            if((i-1>=0 && flowerbed[i-1] == 0)&&(i+1 <sz && flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                cnt++;
            }else if(i-1<0 && (i+1 <sz && flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                cnt++;
            }else if((i-1>=0 && flowerbed[i-1] == 0)&&i+1>=sz){
                flowerbed[i] = 1;
                cnt++;
            }else if(i-1<0 && i+1>=sz){
                flowerbed[i] = 1;
                cnt++;
            }
        }
        return cnt>=n ;
        
    }
};
