string longestPalindrome(string s) {
    int res_len = 0;
    string res = "";
    for(int i = 0; i < s.size(); i++){
        int l = i, r = i;
        while(l >= 0 && r <= s.size() && s[l] == s[r]){
            if(r - l + 1 > res_len){
                res_len = r - l + 1;
                string x = s.substr(l, res_len);
                res = x;
            }
            l--;
            r++;
        }
        l = i, r = i + 1;
        while(l >= 0 && r <= s.size() && s[l] == s[r]){
            if(r - l + 1 > res_len){
                res_len = r - l + 1;
                string x = s.substr(l, res_len);
                res = x;
            }
            l--;
            r++;
        }
    }
    return res;
}
