#include <iostream>
#include <cstdint>
using namespace std;

//unlike plain enums C++11 enum class is type safe and doesnot neccessarily convert to int 
enum class days:std::int8_t{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

ostream& operator<<(ostream& out, const days& d){
  out<<static_cast<int>(d); return out;
}
days operator++(days&d){ //Prefix Operator
  d = static_cast<days>((static_cast<int>(d)+1)%7);
  return d;
}
days operator++( days&d, int){//Postfix Operator
  days temp = d;
  d = static_cast<days>((static_cast<int>(d)+1)%7);
  return temp;
}

int main(){
  days today{days::MONDAY};
  cout<<"Demonstration of enum class"<<endl;
  cout<<"Monday value is"<<today<<endl;
  cout<<"Increment value is"<<++today<<endl;
  cout<<"Increment value is"<<today++<<endl;
  cout<<today<<endl;
  return 0;
}