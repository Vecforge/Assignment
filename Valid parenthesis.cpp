bool isValid(string s) {
        stack<char>st;
        int a=0;
        if(s.length()==1){
            a=1;
        }
        else{
            for(int i=0;i<s.length();i++){
                if((st.empty() || (st.top()=='('||st.top()=='{'||st.top()=='['))&&(s[i]=='{'||s[i]=='('||s[i]=='[')){
                    st.push(s[i]);
                }
                else if(st.empty()&&(s[i]==')'||s[i]==']'||s[i]=='}')){
                    a=1;
                    break;
                }
                else if((st.top()=='('&&s[i]==')')||(st.top()=='{'&&s[i]=='}')||(st.top()=='['&&s[i]==']')){
                    st.pop();
                }
                else if((st.top()=='('&&s[i]!='}')||(st.top()=='{'&&s[i]!='}')||(st.top()=='['&&s[i]!=']')){
                    a=1;
                    break;
                }
            }

        }

            if(st.empty()&& a==0){
                return true;
            }
            else{
                return false;
            }
        }