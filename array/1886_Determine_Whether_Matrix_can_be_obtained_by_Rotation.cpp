bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for(int x = 0; x < 4; x++){
        reverse(mat.begin(), mat.end());
        for(int i = 0; i < mat.size(); i++){
            for(int j = i + 1; j < mat[0].size(); j++)
                swap(mat[i][j], mat[j][i]);
        }
        if(mat == target) return true;
    }
    return false;
}
