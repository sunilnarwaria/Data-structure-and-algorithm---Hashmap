 //378 leetcode
/*
 Input : 10 20 30 30 40 50
Output : upper_bound for element 30 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 45 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 60 is at index 5
 */
// using upper bound for binary search



   int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        
        int left = matrix[0][0];
        int right = matrix[n-1][n-1];
        
        while (left < right) {
            int mid = (left + right) / 2;
            
            int count = 0;  // number of elements not bigger than midv
            for (int i = 0; i < n; i++) {
                vector<int>& row = matrix[i];
                count += std::upper_bound(row.begin(), row.end(), mid) - row.begin();
            }
            
            if (count < k) {
                left = mid + 1;
            } else {
                right = mid;    
            }
        }
        return left;
    }
