#include <iostream>
using namespace std;
struct slistelem{ char data; slistelem* next}
// struct list_element{
//   list_element(int n = 0; list_element* ptr = 0):
//     d(n),next(ptr){}
//   int d;
//   list_element* next;
// };
class list_element{
  public:
  list_element(int n = 0,list_element* ptr = nullptr): d(n),next(ptr){}
  int d;
  list_element* next;
}
class list{
public:
  list():head(0), cursor(0){}
  list(const int*arr, int n);
  list(const list& lst);//copy constructor;
  void prepend(int n);//insert at front value n;
  int get_element(){return cursor->d;}
  void advance(){cursor = cursor->next;}
  void print();
private: 
  list_element* head;
  list_element* cursor;
};

//deep copy VS referential copy

void list::prepend(int n){
  if(head == 0)//empty list case
    cursor = head = new list_element(n,head);
  else // add to front-chain
    head = new list_element(n,head);
}

void list::print(){
  list_element* h = head;
  while(h!=nullptr){//idom for chaining 
    cout<<h->d<<",";
    h = h->next;
  }
  cout<<"###"<<endl;
}

list::list(const list& lst){
  if(lst.head == 0){
    head = 0; cursor = 0;
  }
  else 
    for(cursor = lst.head; cursor !=0;){
      // cursor  = head;//chain and create
      list_element h = new list_element();
      h->d = cursor->d;
      previous->next = h;
      cursor = cursor->next;
      previous = h;
    }
    cursor = head;
}

list::~list()
{
  for(cursor = head; cursor != 0;){
    cursor = head->next;
    delete head;
    head = cursor;
  }
}

class slist{//singly linked list
public: 
slist(): h(0){}
~slist() {release();} //destructor
//more methods
private:
  slistelem *h;
}

void slist::prepend(char *c){
  slistelem* temp = new slistelem;
  //allocation fails bad, alloc exception thrown
  temp->newxt = h; //single lsit;
  temp->data = c;
  h = temp; //update h;
}

slist::~slist()
{
  cout<<"destrutor called"<<endl;
  //just for demonstration -debug
  release();//march throught the whole list with deletes
}

int main(){
  list a, b;
  int data[10] = {3,4,6,7,-3,5};
  list d(data,6);
  list e(data,10);
  a.prepend(9);a.prepend(8);
  cout<<" list a " <<endl;
  a.print();
}