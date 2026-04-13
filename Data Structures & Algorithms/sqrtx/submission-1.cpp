class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        int low = 0;
        int high = x;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sq = (long long)mid * mid; // ✅ cast to avoid overflow
            if (sq > x)       high = mid - 1;
            else            { ans = mid; low = mid + 1; }
        }
        return ans;
    }
};