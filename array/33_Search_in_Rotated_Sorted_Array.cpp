int search(vector<int>& nums, int target) {
    int n = nums.size();
    int l = 0, r = n - 1;

    while (l < r) {
        int mid = (l + r) / 2;
        if (nums[mid] > nums[r]) l = mid + 1;
        else r = mid;
    }
    int rot = l;

    l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        int rmid = (mid + rot) % n;
        if (nums[rmid] == target) return rmid;
        else if (nums[rmid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
