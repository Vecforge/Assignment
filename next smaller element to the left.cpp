
vector<int> nextSmallestElementToLeft(int arr[], int n) {
    vector<int> res;
    stack<int> st;
    st.push(-1);
    
    for(int i=0; i< n; i++) {
        while(st.top()>=arr[i] && st.top()!=-1)
            st.pop();
        res.push_back(st.top());
        st.push(arr[i]);
    }
    return res;
}