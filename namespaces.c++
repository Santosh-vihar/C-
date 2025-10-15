 
#include <iostream> 
#include <cstdlib> 
using namespace std; 
int b = 5;  
namespace N1 {  
int a = 8; 
namespaceN2 
 } 
 
int a =1; 
void fun() 
{ 
 int a = 1; 
 
cout << "Fun A : " << a << " " << ::b << endl; 
}  
int main() 
{   
int a = 1; 
 
cout << "Inner A : " << a << endl; 
 
 cout << "Outer B : " << b << endl; 
fun(); 
cout << "Name space 1 : " << N1::a << endl; 
cout << "Name space 2 : " << N2::a << endl; 
return 0; 
}
