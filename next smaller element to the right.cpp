vector<int> nextSmallestElementToRight(vector<int> arr, int n) {
    vector<int> res(n,-1);
    stack<int> st;
    st.push(-1);
    
    for(int i=n-1; i>=0; i--) {
        while(st.top()>=arr[i])
            st.pop();
        res[i] = st.top();
        st.push(arr[i]);
    }
    
    return res;
}