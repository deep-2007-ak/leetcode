string longestCommonPrefix(vector<string>& strs) {
    string ans = strs[0];
    for(string s : strs){
        string sans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ans[i])
                sans += s[i];
            else
                break;
        }
        ans = sans;
    }
    return ans;
}
