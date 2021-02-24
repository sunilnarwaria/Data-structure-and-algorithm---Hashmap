// Interviewbit
vector<int> Solution::lszero(vector<int> &a) {
    
    int pfx = 0;
    int n = a.size();
    unordered_map<int,int>mp;
    int st[3];
    int maxx = INT_MIN;
    for(int i =0 ;i<n;i++){
        pfx += a[i];
        if(pfx == 0){
             int ans = i - (-1);
            if(ans>maxx){
                maxx = ans;
                st[0] =i;
                st[1] = -1;
            }
            
               
        }
        else if(mp.find(pfx) != mp.end()){
            int k = mp[pfx];
            int ans = i - k;
            if(ans>maxx){
                maxx = ans;
                st[0] =i;
                st[1] = k;
            }
        }
        else{
            mp[pfx] = i;
        }
        
    }
    //int sz = st[0] - st[1];
    vector<int>v;
    for(int j = st[1]+1;j<=st[0];j++){
        v.push_back(a[j]);
    }
    return v;
    
}
