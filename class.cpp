#include<iostream>
#include<cstring>
#define size 10
using namespace std;

/* class num
{
  int a[size];// array define as data member 

  public:
  void input()
  {
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter "<<i<<" th element: ";
        cin>>a[i];
    }
    
  }
friend float average (num);// num obj avg define 

};

float average (num temp)
{
    float sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        sum=sum+temp.a[i];
    }
    float avg=sum/10;
    cout<<avg;
    return(avg);


}

int main()
{
    num n1;//object banaya
    n1.input();//obj le member fn lai call gareko
    float avg=average(n1); //avg friend fn lai call 
    cout<<"The average is "<<avg;

}
*/
class B;
class A{
    int x;
    public:
    void input()
    {
        cout<<"Enter no :";
        cin>>x;
        cout<<"x:"<<x;
    }
    friend void swap(A&,B&);
};
class B{
    int y;
    public:
     void input()
    {
        cout<<"\nEnter no :";
        cin>>y;
        cout<<"y:"<<y;
    }
     friend void swap(A&,B&);
};

  void swap(A &a,B &b)
  {
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
    cout<<"\nAfter Swap\n X:"<<a.x<<"\n Y:"<<b.y;

  }

int main()
{
    A a;
    B b;
    a.input();
    b.input();
    swap(a,b);


}