int rob(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
    int a = nums[0], b = max(a, nums[1]), c;
    for(int i = 2; i < nums.size(); i++){
        c = max(a + nums[i], b);
        a = b;
        b = c;
    }
    return b;
}
