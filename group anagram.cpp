//49 leetcode

  vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = s; 
            // t = sorting k baad saari anagram wali same bn jayegi
            // toh t ko key bna liya
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for (auto p : mp) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
