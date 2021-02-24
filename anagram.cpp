// Interviewbit

vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    
    map<string, vector<int>> mp;
    int j =0;
    for(string c : a){
        j++;
         sort(c.begin(),c.end());
        mp[c].push_back(j);
    }
    vector<vector<int>> v;
    for(auto it : mp){
       
        v.push_back(it.second);
    }
    return v;
}
