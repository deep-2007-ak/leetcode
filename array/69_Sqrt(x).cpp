int mySqrt(int x) {
    if(x <= 1) return x;
    long long int l = 0, r = x, m;
    while(l <= r){
        m = (l + r) / 2;
        if(m * m <= x) l = m + 1;
        else r = m - 1;
    }
    return r;
}
