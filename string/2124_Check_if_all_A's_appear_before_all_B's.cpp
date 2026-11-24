bool checkString(string s) {
    int i = 0;
    while(i < s.size() && s[i] == 'a') i++;
    if(i == s.size()) return true;
    while(i < s.size()){
        if(s[i] == 'a') return false;
        i++;
    }
    return true;
}
