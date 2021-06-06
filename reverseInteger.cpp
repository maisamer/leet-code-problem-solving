class Solution {
public:
    int reverse(int n) {
        long r = 0;
        while(n!=0){
            signed rem = n % 10;
            r = r * 10;
            r = r + rem;
            n = n/10;
        }
        if(r>=INT_MAX||r<=INT_MIN)
            return 0;
        return r;
    }
};
