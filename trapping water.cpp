// left to right and right to left max lelo
// min in left and right of the index
// ans += min-index ki height

 int trap(vector<int>& height) {
        int n = height.size();
        int pfxmx[n];
        int sfxmx[n];
        int pmx = INT_MIN;
        int smx = INT_MIN;
        for(int  i = 0;i<n;i++){
            pmx = max(pmx,height[i]);
            pfxmx[i] = pmx;
        }
         for(int  i = n-1; i >= 0;i--){
            smx = max(smx,height[i]);
            sfxmx[i] = smx;
        }
        int ans = 0;
        for(int  i = 0;i<n;i++){
            ans += (min(pfxmx[i],sfxmx[i]) - height[i]);
        }
        return ans;
    }
