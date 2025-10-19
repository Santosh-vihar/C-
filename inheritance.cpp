#include<iostream> 
using namespace std; 
class vehicle{ 
public: 
vehicle(){ 
cout<<" is a vehicle"<<endl; 
} 
}; 
class car:public vehicle 
{ 
public: 

}; 
 
car(){ 
cout<<" vehicle is a car"<<endl; 
} 
int main() 
{ 
cout<<"Roll No:24B11AI450"<<endl; 
car obj; 
return 0; 
}
