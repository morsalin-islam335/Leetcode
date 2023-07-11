//prograom to find out minimum value from stack and print top value of stack with use 2 stack
//problem link:  https://leetcode.com/problems/min-stack


class MinStack {
public:
    MinStack() {
        
    }
    stack<int>myS;
    stack<int>minS;

    void push(int val) {
        myS.push(val);
        if(minS.empty())minS.push(val);
        else minS.push(min(minS.top(),val));

    }
    
    void pop() {
        minS.pop();
        myS.pop();
    }
    
    int top() {
        return myS.top();
    }
    
    int getMin() {
        return minS.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */