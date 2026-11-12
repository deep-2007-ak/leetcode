vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> ans;
    for(int i=0;i<score.size();i++){
        int key = score[i];
        int pos = 0;
        for(int num:score){
            if(num > key)
                pos++;
        }
        if(pos == 0) ans.push_back("Gold Medal");
        else if(pos == 1) ans.push_back("Silver Medal");
        else if(pos == 2) ans.push_back("Bronze Medal");
        else ans.push_back(to_string(pos+1));
    }
    return ans;
}
