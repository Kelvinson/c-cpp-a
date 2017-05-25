class Point{
public: 
  point(double x = 0.0, double y = 0.0): x(x),y(y){}//constructor, there is another way: use this "-->" operator for initializing but 
  double getx(){return x;}   // "this->" doesn't apply to const variables so the way classname(): variablename(variable)... is good in 
  void setx(double v){x = v;} // this case // there are three kinds of ways to initialize 1.point(){ x=y=0.0;} 
private:                        //2.point(){this->0.0;this->y=0.0} 3. or best point(): x(0.0),y(0.0){}
  double x,y;
}
