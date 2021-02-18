/* 
Hash map freq will count the frequence of elements.
Hash map m is a map of stack.
If element x has n frequence, we will push x n times in m[1], m[2] .. m[n]
maxfreq records the maximum frequence.

push(x) will push x tom[++freq[x]]
pop() will pop from the m[maxfreq]
*/
unordered_map<int, int> freq;
    unordered_map<int, stack<int>> m;
    int maxfreq = 0;
    FreqStack() {
        
    }
    
    void push(int x) {
         maxfreq = max(maxfreq, ++freq[x]);
          m[freq[x]].push(x);
    }
    
    int pop() {
        int x = m[maxfreq].top();
        
        m[maxfreq].pop();
        if (!m[freq[x]--].size()) maxfreq--;
        return x;
    }
