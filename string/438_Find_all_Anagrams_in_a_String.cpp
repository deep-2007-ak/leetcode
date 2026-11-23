vector<int> findAnagrams(string s, string p) {
    if(s.size() < p.size()) return {};
    vector<int> a(26, 0), b(26,0);
    vector<int> ans;
    for(char c : p) a[c - 'a']++;
    int i = 0, j = 0;
    while(j < s.size()){
        b[s[j] - 'a']++;
        if(j - i + 1 == p.size()){
            if(b == a) ans.push_back(i);
            b[s[i] - 'a']--;
            i++;
            j++;
        }
        else if(j - i + 1 < p.size()) j++;
    }
    return ans;
}
