//program to implement queue from stack
//problem link:  https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    stack<int>myStack,duplicate;
    int size=0;
    int front;

    MyQueue() {
        
    }
    
    void push(int x) {
        size++;
        if(myStack.empty())front =  x;
        myStack.push(x);
    }
    
    int pop() {
        size--;
        int x;
        while(!myStack.empty())
        {
            x = myStack.top();
            myStack.pop();
            if(!myStack.empty())
            {
                front = x;
                duplicate.push(x);
            }

        }
        while(!duplicate.empty())
        {
            myStack.push(duplicate.top());
            duplicate.pop();
        }
        return x;
    }
    
    int peek() {
       return front; 
    }
    
    bool empty() {
        if(size>0)return false;
        return true;
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