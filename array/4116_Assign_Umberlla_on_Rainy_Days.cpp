vector<string> assignUmbrella(vector<int>& rain) {
    int n = rain.size();
    vector<string> res(n, "None");
    int ac = 0, bc = 0;
    for(int i = 0; i < n; i++){
        bool a = (i + 1 < n && rain[i] == 1 && rain[i+1] == 1 );
        bool b = (rain[i] == 1);
        if(a && b){
            if(ac <= bc){
                res[i] = ("Alice");
                ac++;
            }
            else{
                res[i] = ("Bob");
                bc++;
            }
        }
        else if(b){
            res[i] = ("Bob");
            bc++;
        }
    }
    return res;
}
