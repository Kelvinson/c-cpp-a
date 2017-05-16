#include <iostream>
using namespace std;
template <class T> //const is used to let the compiler check the error.
T sum(const T data [], int size, T s = 0 ){ // with two parameters ,we can have both the initial value and the 
  for(int i = 0;i<size; ++i) //accumulated result value;
      s+=data[i];
    return s;
}

template <class T>
void output(const T data[], int size){
  for(int i  = 0; i<size;++i)
    cout<<data[i]<<endl;
}

template <class T>
T Minus(const T data [], int size, T m = 0){
  for (int i = 0; i<size; ++i)
    m -= data[i];
  return m;
}

int main(){
  cout<<"template for sum()"<<endl;
  int a[] = {1,2,3};
  double b[] = {2.1,2.2,2.3};
  cout<<sum(a,3)<<endl;
  cout<<sum(b,3)<<endl;
  output(b,3);
  cout<<Minus(b,3,0.0)<<endl;
  return 0;
}