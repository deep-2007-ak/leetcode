int strStr(string haystack, string needle) {
    int s1 = haystack.size();
    int s2 = needle.size();
    for(int i=0;i<=s1-s2;i++){
        string x = haystack.substr(i,s2);
        if(x == needle) return i;
    }
    return -1;
}
