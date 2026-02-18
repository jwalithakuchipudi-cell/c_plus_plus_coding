
#include<iostream>
using namespace std;
int main(){
     int age;
     char dayType,student;
     float price =10;
     cout<<"ticket price caluculator"<<endl;
     cout<<"enter age: ";
     cin>>age;
     cout<<"enter day type(w for weekday,h for holiday): ";
     cin >>dayType;
     cout<<"are you a student ?(y/n): " ;
     cin>>student;
     if(age<12){
          price=price-(price*0.50);
     }   
     else if(age>=65)
     {
          price=price-(price*0.30);
     }
     else if(age>=12 && age<=64 && student =='y' && dayType=='w')
     {
          price=price-(price*0.20);
     }
     if(dayType=='e')
     {
          price=price+2;
     }
     cout<<"final ticket price : $"<<price<<endl;
     return 0;
}