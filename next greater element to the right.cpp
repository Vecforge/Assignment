vector<long long> nextLargerElement(vector<long long> arr, int n) {
    vector<long long> res;
    stack<long long> st;
        
    for(int i =vn-1; i>=0; i--) {
        if(st.size() == 0) {
            res.push_back(-1);  
        } else if(st.size() > 0 && st.top() > arr[i]) {
            res.push_back(st.top());
        } else if(st.size() > 0 && st.top() <= arr[i]) {
            while(st.size() > 0 && st.top() <= arr[i])
                st.pop();
		
            if(st.size() == 0) 
                res.push_back(-1);
             else 
                res.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(res.begin(), res.end());
        
    return res;
}