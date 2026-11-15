bool isAnagram(string s, string t) {
    int n = s.size();
    int m = t.size();
    if(n != m) return false;
    vector<int> count(26,0);
    for(int i = 0; i < n; i++) {
        count[s[i]-97]++;
        count[t[i]-97]--;
    }
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) return false;
    }
    return true; 
}
