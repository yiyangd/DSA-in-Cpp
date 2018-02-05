class Node{
public:
  int data;
  Node* next;
  Node(int _data, Node* _next){
    data = _data;
    next = _next;
  }
};

class StackLL{
private:
  Node* top_ptr;
  int c_size;
  StackLL(){
    top_ptr = NULL;
    c_size = 0;
  }
public:
  void push(int item){
    top_ptr = new Node(item, top_ptr);
    c_size++;
  }
  int pop(){
    Node* temp_ptr = top_ptr;
    int temp = top_ptr -> data;
    top_ptr = top_ptr -> next;
    delete temp_ptr;
    c_size--;
    return temp;
  }
  int top(){
    return top_ptr -> data;
  }
  bool empty{
    return (top_ptr == NULL);
  }
}
  
