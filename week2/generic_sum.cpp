#include <iostream>
using namespace std;
template <class T> //const is used to let the compiler check the error.
T sum(const T data [], int size, T s = 0 ){ // with two parameters ,we can have both the initial value and the 
  for(int i = 0;i<size; ++i) //accumulated result value;
      s+=data[i];
    return s;
}

int main(){
  cout<<"template for sum()"<<endl;
  int a[] = {1,2,3};
  double b[] = {2.1,2.2,2.3};
  cout<<sum(a,3)<<endl;
  cout<<sum(b,3)<<endl;
  return 0;
}