//This is a simple program for adding all the int numbers to 
//a base accum number, the program use vector to contain the 
//integer elements and declare the sum function to the inline 
//type for effeciency and at the call of the function use the 
//"call by reference" method to change the actual value of 
//the base accumulation number
#include <iostream>
#include <vector>
#include <sys/time.h>
using namespace std;
const int N = 40;
inline void sum(int &accum, vector<int> d){
  for(int i=0;i<d.size();i++)
    accum+=d[i];
}
int main(){
int accum = 0;
vector<int> data(N);
for( int i = 0; i < N; ++i)
  data[i] = i;
sum(accum,data);
cout<<"The accumlation sum of the vector is : "<<accum<<endl;
return 0;
}