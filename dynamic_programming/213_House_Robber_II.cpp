int rob(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return nums[0];
    int a = nums[0], b = max(a, nums[1]), c;
    for(int i = 2; i < n - 1; i++){
        c = max(nums[i] + a, b);
        a = b;
        b = c;
    }
    int ans = b;
    if(n == 2) return ans;
    a = nums[1], b = max(a, nums[2]);
    for(int i = 3; i < n; i++){
        c = max(nums[i] + a, b);
        a = b;
        b = c;
    }
    return max(b, ans);
}
