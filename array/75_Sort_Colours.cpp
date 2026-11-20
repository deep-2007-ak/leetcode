void sortColors(vector<int>& nums) {
    int l = 0, r = nums.size() - 1, curr = 0;
    while(curr <= r){
        if(nums[curr] == 0){
            swap(nums[curr], nums[l]);
            curr++;
            l++;
        }
        else if(nums[j] == 1) j++;
        else{
            swap(nums[curr], nums[r]);
            r--;
        }
    }
}
