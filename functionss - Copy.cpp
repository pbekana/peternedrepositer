
// this about predifined functions
#include <iostream>
#include<cmath>
using namespace std;
int calculating(int a,int b){

   cout<<"enter two numbers ";
   cout<<endl;
   cin>>a>>b;
   cout<<" this power of 3"<<pow(a,3)<<endl<<pow(b,3)<<endl;
   cout<<"this is absolute value of numbers "<<fabs(a) <<endl<<fabs(b)<<endl;
   cout<<" this e base power of numbers"<<exp(a)<<endl<<exp(b)<<endl;


}
int main (){
 int a = 2,b = -6;
 calculating(a,b);

return 0;
}
