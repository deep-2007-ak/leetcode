vector<int> searchRange(vector<int>&nums,int target){
    int s=-1,e=-1;
    int l=0,r=nums.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            s=mid;
            r=mid-1;
        }
        else if(nums[mid]<target)l=mid+1;
        else r=mid-1;
    }
    l=0,r=nums.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            e=mid;
            l=mid+1;
        }
        else if(nums[mid]<target)l=mid+1;
        else r=mid-1;
    }
    return{s,e};
}
