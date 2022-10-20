void insertBottom(stack<int> &stack, int x){
    if(stack.empty()) {
        stack.push(x);
        return;
    }
    int temp=stack.top();
    stack.pop();
    insertBottom(stack,x);
    stack.push(temp);
    
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) return;
    
    int temp=stack.top();
    stack.pop();
    
    reverseStack(stack);
    insertBottom(stack,temp);
}