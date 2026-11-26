bool canAliceWin(int n) {
    int r = 10;
    while(true){
        if(n < r) return false;
        n -= r;
        r--;
        if(n < r) return true;
        n -= r;
        r--;
    }
}
