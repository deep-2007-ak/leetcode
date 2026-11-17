int majorityElement(vector<int>& nums) {
    int result = nums[0], count = 0;
    for(const int& i : nums){
        if(i == result) count++;
        else count--;
        if(count == 0){
            result = i;
            count = 1;
        }
    }
    return result;
}
