#include<iostream> 
using namespace std; 
class roadvehicle{ 
public: 
roadvehicle(){ 
cout<<" is a land vehicle"<<endl; 
} 
}; 
class watervehicle{ 
public: 
watervehicle(){ 
cout<<" is a water vehicle"<<endl; 
} 
}; 
class ampvehicle:public watervehicle,public roadvehicle{ public: 
ampvehicle(){ 
cout<<" is an both land and water vehicle"<<endl; 
} 
}; 
int main(){ 
cout<<"Roll No:24B11AI450"<<endl; 
ampvehicle obj; return 
0; 
}
