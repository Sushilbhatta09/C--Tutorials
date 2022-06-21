#include <iostream>
using namespace std;
class complex
{
public:
int r, i;//r-real part i-imaginary part
void input()   // member fn
 {
cout << "Enter real part: ";
cin >> r;
cout << "Enter imaginary part: ";
cin >> i;

}
void display()
 {
cout <<"complex no:"<< r << "+i" << i << endl;
}

};

complex add(complex x, complex y) //function return type -classname
{
complexn t;// temp complex variable 
t.r = x.r + y.r;
t.i = x.i + y.i;
return t; // complex no lai return gardiyeu
}


int main()
{

complex c1,c2,c3;// 3 ta object banaya
c1.input();// c1 le input liyo
c2.input();
c3 = add(c1,c2);// add vane call vayo arg - complex1,complex2
cout << "The sum is: ";
c3.display();
return 0;
}