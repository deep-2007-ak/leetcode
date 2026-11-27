int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int a = cost[n - 1], b = cost[n - 2], c;
    for(int i = n - 3; i >= 0; i--){
        c = cost[i] + min(a, b);
        a = b;
        b = c;
    }
    return min(a, b);
}
