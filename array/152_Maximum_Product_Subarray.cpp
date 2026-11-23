int maxProduct(vector<int>& nums) {
    int ans = nums[0], maxP = 1, minP = 1;
    for(int x : nums){
        if(x < 0) swap(maxP, minP);
        maxP = max(x, maxP * x);
        minP = min(x, minP * x);
        ans = max(ans, maxP);
    }
    return ans;
}
