class MyQueue {
public:
stack<int>st;
stack<int>temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size()==0){
            st.push(x);
            return;
        }
        else{
            while(st.size()>0){
                temp.push(st.top());
                st.pop();
            }
            st.push(x);
            while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
        }
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */