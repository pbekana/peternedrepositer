#include<iostream>
using namespace std;
#include<cstring>
class man{
protected :
    int s;
public:
   void print(){
   int s = 9;
   cout<<s<<endl;
   }

};
int main(){
man m;
m.print();
char r[] = {" some"};
cout<<strlen(r);
string s1[5] = {"some"};
string s2[5] ;
for(int i=0;i<5;i++){
        s2[i] = s1[i];
}
for(int i=0;i<5;i++){
        cout<<s2[i];
}


//emp e= {"eden" ,1212,5675};
//cout<<dep.deparmentname<<endl<<dep.name<<endl;

//cout<<"array in reverse order "<<endl;
//for(int i= 0;i<4;i++){
/*reverse(rev,rev+size);
for(int i = 0;i<4;i++)*/
//per p;
//r.print();

 return 0;
}
