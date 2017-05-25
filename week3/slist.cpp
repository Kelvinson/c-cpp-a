struct slistelem{ char data; slistelem* next;}

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