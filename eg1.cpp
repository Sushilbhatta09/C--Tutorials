#include<iostream>
#include<cstring>
using namespace std;

class car
{
    private:
    char car_name[20];//data 
    int car_size;//data
    public:
   //comstructor 
   car(char a[],int size)  // parameterized constructor 
   {
    strcpy(car_name,a);
    car_size=size;
   }

   car()
   {
    cout<<"car object is created";
   }

   car(car &obj)//copy constructor
   {//obj=car1
   car_size=obj.car_size;
    strcpy(car_name,obj.car_name);
  // car2.name=car1.name ho
    
   }

   ~car()
   {
    cout<<"\nObject is destroyed\n";
   }

    void input ()// member function
    {
     cout<<"Enter name and size of car \n";
     gets(car_name);
     //cin>>car_size;

    }
   void display();//member function
   /* {
        cout<<"\n Car name :"<<car_name<<"\t Size :"<<car_size;
    }*/

   
};

  void car::display()//member function
    {
        cout<<"\n Car name :"<<car_name<<"\t Size :"<<car_size;
    }


int main()

{

    // declare a object
    car car1("sushil",90),car2(car1);// object declare garda constructor call hunxa aafai
   car1.input();
    //int eg=car1.car_size;
    //cout<<"Size :"<<eg;
    car1.display();
    car2.display();

}