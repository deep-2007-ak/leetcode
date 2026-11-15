int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int count = 0;
    for(int i=0;i<arr1.size();i++){
        bool istrue = true;
        for(int j=0;j<arr2.size();j++){
            int sum = abs(arr1[i]-arr2[j]);
            if(sum <= d){
                istrue = false;
                break;
            }
        }
        if(istrue) count++;
    }
    return count;
}
