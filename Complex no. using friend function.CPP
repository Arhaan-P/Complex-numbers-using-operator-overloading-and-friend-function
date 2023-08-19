#include<iostream.h>
#include<conio.h>
class complex{
  int x,y;
  public:
  complex(){}
  complex(int a, int b)
  {
     x=a;
     y=b;
  }
  void print() {
      cout<<x<<" + "<<y<<"i \n";
  }
  complex sum(complex c1, complex c2){
      complex c3;
      c3.x = c1.x + c2.x;
      c3.y = c1.y + c2.y;
      return c3;
  }
    friend complex add(complex c1, complex c2);
};
complex add(complex c1,complex c2){
  complex c4;
  c4.x = c1.x + c2.x;
  c4.y = c1.y + c2.y;
  return c4;
}
void main(){
  clrscr();
  complex c1(5,4),c2(3,2),c3,c4;
  c1.print();
  c2.print();
  c3=c3.sum(c1,c2);
  cout<<"Sum using member function \n";
  c3.print();
  c4=add(c1,c2);
  cout<<"Sum using friend function \n";
  c4.print();
  getch();
}






                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











