#include<iostream>
#include<string>
 using namespace std;
 class stu
 {
    public:
     int roll;
     string name;
     int fee;
 };

 int main ()
 {
    stu s;
    cout<<"Enter Your Name"<<endl;
    cin>>s.name;
    cout<<"Enter Your Fee"<<endl;
    cin>>s.roll;
    cout<<"Enter YOur Roll No"<<endl;
    cin>>s.fee;

    cout<<"*****************Student Deatils******************************"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Num: "<<s.roll<<endl;
    cout<<"Name: "<<s.name<<endl;
    

 }