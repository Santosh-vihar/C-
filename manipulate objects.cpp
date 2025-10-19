#include<iostream> 
using namespace std; 
class student 
{ 
private: 
string name; 
int age; 
public: 
void setdata(string n,int a) 
{ 
name=n; 
age=a; 
} 
{ 
} 
}; 
int main() 
{ 
void display() 
 
cout<<"name:"<<name<<endl; 
cout<<"age:"<<age<<endl; 
cout<<”Roll No:24B11AI450”<<endl; 
student s1; 
s1.setdata("VEESAM 
BHARTH",19); 
s1.display(); 
student *ptr; 
ptr=&s1; 
ptr->display(); 
student *ptr2=new student; 
ptr2- 
>setdata("munna",21); 
ptr2->display(); 
delete ptr2; 
return 0; 
} 
