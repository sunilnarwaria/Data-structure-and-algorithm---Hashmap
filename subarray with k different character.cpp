 // Leetcode 992

int subarraysWithKDistinct(vector<int>& A, int K) {
        return atMostK(A, K) - atMostK(A, K - 1);
    }
    int atMostK(vector<int>& A, int K) {
        int i = 0, res = 0;
        unordered_map<int, int> count;
        for (int j = 0; j < A.size(); ++j) {
            if (!count[A[j]]++) K--;
            while (K < 0) {
                if (!--count[A[i]]) K++;
                i++;
            }
            res += j - i + 1;
        }
        return res;
    }
 int atMostKDistinct(vector<int>& A,int n,int k){
    int count = 0;
    int left = 0;
    int right = 0;
    
    unordered_map<int,int> mp;
    
    while(right < n){
        
        //add current element in the map
        if(mp.find(A[right]) == mp.end()){
            mp[A[right]] = 1;
        }else{
            mp[A[right]]++;
        }
        
        while(mp.size() > k){
            mp[A[left]]--;
            if(mp[A[left]] == 0){
                mp.erase(A[left]);
            }
            left++;
        }
        
        count += right-left+1;
        right++;
    }
    
    
    return count;
}

    int subarraysWithKDistinct(vector<int>& A, int k) {
        int n = A.size();
        return atMostKDistinct(A,n,k) - atMostKDistinct(A,n,k-1);
    }
