vector<string> letterCombinations(string digits){
    map<char, string> m = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},
                           {'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    vector<string> res;
    if (digits.empty()) return res;
    function<void(int, string)> back_rank = [&](int i, string curr){
        if(curr.size() == digits.size()){
            res.push_back(curr);
            return;
        }
        for(char c : m[digits[i]])
            back_rank(i + 1, curr + c);
    };
    back_rank(0, "");
    return res;
}
