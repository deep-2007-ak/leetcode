long long minCost(vector<int>& nums) {
    int n = nums.size();
    long long best = LLONG_MAX;
    int a = 0;
    while (a < n) {
        int b = a;
        while (b + 1 < n && nums[b + 1] == nums[a]) b++;
        bool left = (a == 0) || (a <= n - 2);
        bool right = (b == n - 1) || (b >= 1);
        if (left && right) {
            long long cost = (long long)nums[a] * (a + (n - 1 - b));
            best = min(best, cost);
        }
        a = b + 1;
    }
    return best;
}
