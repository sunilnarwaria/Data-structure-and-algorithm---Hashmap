


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    priority_queue<int,vector<int>,greater<int> > pq;
	    for(int i=0;i<k;i++) {
	        pq.push(arr[i]);
	    }
	    int i = 0;
	    while(i+k<n) {
	        arr[i] = pq.top();
	        pq.pop();
	        pq.push(arr[i+k]);
	        ++i;
	    }
	    while(!pq.empty()) {
	        arr[i] = pq.top();
	        pq.pop();
	        ++i;
	    }
	    for(int i=0;i<n;i++) {
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
