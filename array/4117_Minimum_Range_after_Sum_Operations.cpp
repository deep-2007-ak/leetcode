int minRange(int a, int b, int c) {
    vector<int> ans = {a, b, c};
    sort(ans.begin(), ans.end());
    return min(ans[2] - ans[0], ans[1]);
}
