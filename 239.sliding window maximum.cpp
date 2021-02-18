 //Method 1: deque se
 vector<int> maxSlidingWindow(vector<int>& A, int B) {
        vector<int> ans;
        deque<int> dq;
        for(int i = 0; i < A.size(); i++){
    while(!dq.empty() && dq.back() < A[i]) dq.pop_back();
    dq.push_back(A[i]);
    if(i >= B - 1){
        ans.push_back(dq.front());
        if(A[i - B + 1] == dq.front()) dq.pop_front();
    }
}
return ans;
    }
    
    
// Method 2:
 window ka let max and right max lekr
