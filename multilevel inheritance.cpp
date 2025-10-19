#include<iostream> 
using namespace std; 
class vehicle{ 
public: 
vehicle(){ 
cout<<" is a vehicle"<<endl;} 
 
}; 
class fourwheeler:public vehicle{ 
public: 
fourwheeler(){ 
cout<<"four wheels vehicles"<<endl; 
} 
}; 
class car:public fourwheeler{ 
public: 
car(){ 
cout<<" four wheels vehicle is a car"; 
 
} 
}; 
int main() 
{ 
cout<<"Roll No:24B11AI450"<<endl; 
car obj; 
return 0; 
}
