class MinStack {
public:
stack<int>minStack;
stack<int>thestack;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(minStack.empty()){
            minStack.push(val);
            thestack.push(val);
        }else{
            if(val<=minStack.top()){
            minStack.push(val);
            thestack.push(val);
        }else{
            int top=minStack.top();
            minStack.push(top);
            thestack.push(val);
        }
        }
           
    }
    
    void pop() {
        thestack.pop();
        minStack.pop();
        
    }
    
    int top() {
        if(!thestack.empty())
        return thestack.top();
                throw underflow_error("Erreur : Impossible d'accéder au sommet, la pile est vide.");
        
    }
    
    int getMin() {
        if(!thestack.empty()){
             return minStack.top();
        }
       
                throw underflow_error("Erreur : Impossible d'accéder au sommet, la pile est vide."); 
    }
};
