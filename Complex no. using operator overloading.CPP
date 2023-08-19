#include<iostream.h>
#include<conio.h>
class complex{
  int x,y;
  public:
  complex(){}
  complex (int a,int b)
  {
    x=a;
    y=b;
  }
  void print(){
    cout<<x<<" + "<<y<<"i \n";
  }
  complex operator +(complex c2)
  {
    complex c3;
    c3.x = x + c2.x;
    c3.y = y + c2.y;
    return c3;
  }
};
void main(){
  clrscr();
  complex c1(5,3), c2(1,2),c3;
  c1.print();
  c2.print();
  c3=c1+c2;
  cout<<"Sum using operator overloading \n";
  c3.print();
  getch();
}


                                                                                
                                                                                
                                                                                

                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




