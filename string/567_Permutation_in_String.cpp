bool checkInclusion(string s1, string s2) {
    vector<int> a(26, 0), b(26, 0);
    for(char c : s1) a[c - 'a']++;
    int i = 0, j = 0;
    while(j < s2.size()){
        b[s2[j] - 'a']++;
        if(j - i + 1 == s1.size()){
            if(a == b) return true;
            else{
                b[s2[i] - 'a']--;
                i++;
                j++;
            }
        }
        else if(j - i + 1 < s1.size()) j++;
    }
    return false;
}
