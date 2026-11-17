int lengthOfLongestSubstring(string s) {
    int left = 0,ans = 0;
    map<char, int> c;
    for(int i = 0; i < s.size(); i++){
        if(c.contains(s[i]) && c[s[i]] >= left)
            left = c[s[i]] + 1;
        c[s[i]] = i;
        ans = max(ans, i - left + 1);
    }
    return ans;
}
