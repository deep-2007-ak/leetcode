int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int res = nums[0] + nums[1] + nums[2];
    for(int i = 0; i < nums.size() - 2; i++){
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1, r = nums.size() - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(abs(target - sum) < abs(target - res)) res = sum;
            if(sum == target) return sum;
            else if(sum < target){
                l++;
                while(l < r && nums[l] == nums[l-1])
                    l++;
            }
            else{
                r--;
                while(l < r && nums[r] == nums[r+1])
                    r--;
            }
        }
    }
    return res;
}
