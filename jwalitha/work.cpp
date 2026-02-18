//bmi categorization
#include<iostream>
using namespace std;
int main()
{
    float weight,height,bmi;
    cout<<"BMI categorization"<<endl;
    cout<<"enter weight(kg): ";
    cin>>weight;
    cout<<"enter height(m): ";
    cin>>height;
    bmi=weight/(height*height);
    cout<<"BMI"<<bmi<<endl;
    if(bmi<18.5)
    cout<<"category: underweight";
    else if(bmi>=18.5 && bmi<25)
      cout<<"category: normal";
      else if (bmi>=25 && bmi< 25)
    cout<<"category: over weight";

    else
       cout<<"category: obese";
       return 0;
}
