class MyStack {
    queue<int> q;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        // Get size 
        int s = q.size(); 
        // Add element
        q.push(x); 

        // Move elements before new element to back
        for (int i = 0; i < s; i++) {
            q.push(q.front()); 
            q.pop(); 
        }
    }
    
    int pop() {
        // Get front element 
        int n = q.front(); 
        // Remove front element
        q.pop(); 
        // Return removed element
        return n;
    }
    
    int top() {
        // Return front element
        return q.front(); 
    }
    
    bool empty() {
        return q.empty();
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