void nextGreaterElementLeft(vector<int> &arr) {
    int size = arr.size();
    stack<int> st;
    vector<int> ar;

    for (int i = 0; i < size; i++) {
        if (st.empty()) {
            st.push(arr[i]);
            ar.push_back(-1);
        } else if (st.top() > arr[i]) {
            ar.push_back(st.top());
            st.push(arr[i]);
        } else {
            while (!st.empty()) {
                if (st.top() > arr[i]) {
                    ar.push_back(st.top());
                    st.push(arr[i]);
                    break;
                }
                st.pop();
            }
            if (st.empty()) {
                st.push(arr[i]);
                ar.push_back(-1);
            }
        }
    }

    arr = ar;
}