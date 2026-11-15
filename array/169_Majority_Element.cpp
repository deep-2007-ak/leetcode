int majorityElement(vector<int>& nums) {
    unordered_map<int, int> counts;
    int n = nums.size();
    for (int x : nums) {
        counts[x]++;
        if (counts[x] > n / 2) return x;
    }
    return -1;
}
