//In this program, a simple version of list data structure is
//build from scratch to deepen the understanding of list.
//class of list_element with the data field d and a pointer 
// to the next data field.
/***
//this is the C version of list using struct ;
struct list_element{
  list_element(int n = 0,list_element* ptr = 0): d(n),next(ptr){}
  int d;
  list_element* next;
}
***/
//C++ version of class list_element
class list_element{
  public:
  list_element(int n = 0, list_element* ptr=nullptr):d(n),next(ptr) {}
  int d;
  list_element* next;
};

class list{
public:
  list():head(nullptr),cursor(nullptr){}
  void prepend(int n);
  int get_element(){return cursor->d;}
  void advance(){cursor = cursor->next;}
  void print();
private:
  list_element* head;
  list_element* cursor;
};

void list::prepend(int n){
  // the list to prepend is an empty list
  //so we have to create it: intialize the head and cursor pointer.
  if(head == 0) cursor = head = new list_element(n,head);
  //else add to the front chain
  else head = new list_element(n,head);
}

int main(){
  return 0;
}