int countDistinctIntegers(vector<int>& nums){
    unordered_set<int> s;
    s.reserve(nums.size() * 2);
    for(int n : nums){
        s.insert(n);
        int y = 0;
        while(n){
            y = (y * 10) + (n % 10);
            n = n / 10;
        }
        s.insert(y);
    }
    return s.size();
}
