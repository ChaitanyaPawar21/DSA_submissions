class MinStack {
public:
stack<pair<int,int>>stk;
    MinStack() {
        
    }
    
    void push(int val) {
        pair<int,int>ele;
        if (stk.empty()){
            stk.push({val,val});
        } 
        else{
            int currMin=min(stk.top().second, val);
            stk.push({val,currMin});
        }
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};
