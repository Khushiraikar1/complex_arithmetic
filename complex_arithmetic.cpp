#include<iostream>
using namespace std;
class ComplexNo{
  float real;
  float imag;
  public:
  void setNum(float a,float b){
     real=a;
     imag=b;
  }
  void printNum(){
     cout<<real<<"+ i"<<imag<<endl;
     }
     ComplexNo add(ComplexNo c);
     ComplexNo sub (ComplexNo c);
     ComplexNo mul(ComplexNo c);
     ComplexNo div(ComplexNo c);
    };

ComplexNo ComplexNo :: add(ComplexNo c){
   ComplexNo temp;
   temp.real = real+c.real;
   temp.imag = imag+c.imag;
   return temp;
   }

ComplexNo ComplexNo :: sub(ComplexNo c){
   ComplexNo temp;
   temp.real = real-c.real;
   temp.imag = imag-c.imag;
   return temp;
   }

ComplexNo ComplexNo :: mul(ComplexNo c){
   ComplexNo temp;
   temp.real = real*c.real;
   temp.imag = imag*c.imag;
   return temp;
   }

ComplexNo ComplexNo :: div(ComplexNo c){
   ComplexNo temp;
   temp.real = real/c.real;
   temp.imag = imag/c.imag;
   return temp;
   }

int main(){
  ComplexNo c1,c2,c3;
  int n;
  float x,y;
  cout<<"enter real part of the first number:"<<endl;
  cin>>x;
  cout<<"enter imaginary part of the first number:"<<endl;
  cin>>y;
  c1.setNum(x,y);
  cout<<"enter real part of the second number:"<<endl;
  cin>>x;
  cout<<"enter imaginary part of the second number:"<<endl;
  cin>>y;
  c2.setNum(x,y);
  c1.printNum();
  c2.printNum();
  while(1){
     cout<<"Enter your choice"<<endl<<"1:addition"<<endl<<"2:subtraction"<<endl<<"3:multiplication"<<endl<<"4:division"<<endl<<"5:exit"<<endl;
     cin>>n;
     switch(n)
     {
      case 1:
      c3 = c1.add(c2);
      cout<<"The sum is:"<<endl;
      c3.printNum();
      break;
      case 2:
      c3 = c1.sub(c2);
      cout<<"The difference is:"<<endl;
      c3.printNum();
      break;
      case 3:
      c3 = c1.mul(c2);
      cout<<"The product is:"<<endl;
      c3.printNum();
      break;
      case 4:
      c3 = c1.div(c2);
      cout<<"The quotient is:"<<endl;
      c3.printNum();
      break;
      case 5:
      exit(0);
      break;
     }
  }

  }
