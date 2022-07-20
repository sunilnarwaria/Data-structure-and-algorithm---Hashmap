  int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        pair <int, int> a[n+1];
        for(int i = 0;i<n;i++){
            a[i].first = end[i];
            a[i].second = i;
        }
        sort(a,a+n);
         int x = a[0].first;
        int ans = 1;
        for(int i = 1;i<n;i++){
           
            if(x < start[a[i].second]) {
                ans++;
                x = a[i].first;
            }
        }
        return ans;
    }
