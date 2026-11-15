vector<int> getConcatenation(vector<int>& nums) {
    size_t n = nums.size();
    vector<int> ans;
    for(int i=0; i<2; i++){
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
