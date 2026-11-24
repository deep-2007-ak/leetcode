double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    for(int i : nums2){
        nums1.push_back(i);
    }
    int n = nums1.size();
    sort(nums1.begin(), nums1.end());
    double ans;
    if(n % 2 == 0)
        ans = (nums1[n/2] + nums1[n/2 - 1]) / 2.0;
    else
        ans = nums1[n/2];
    return ans;
}
