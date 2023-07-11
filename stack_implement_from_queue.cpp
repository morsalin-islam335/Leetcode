//program to implement stack from queue
//problem link: https://leetcode.com/problems/implement-stack-using-queues
class MyStack {
public:
    MyStack() {
        
    }
    queue<int>myQ;
    queue<int>duplicate;
    int tp;
    int last,size=0;

    void push(int x) {
        myQ.push(x);
        tp=x;
        size++;
    }
    
    int pop() {
        size--;
        while(!myQ.empty())
        {
            int x=myQ.front();
            myQ.pop();
            if(!myQ.empty())tp=x;
            if(myQ.empty())last = x;
            else duplicate.push(x);
        }
        myQ=duplicate;
        return last;
    }
    
    int top() {
       return tp;
    }
    
    bool empty() {
       if(size>0)return false;
       return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */