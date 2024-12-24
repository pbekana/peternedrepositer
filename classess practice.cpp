// this are constructors w/c are type of member function and w/c hold the of it's class
#include<iostream>
using namespace  std;
class destination{
public:
string name;
float dist;
int hr;
int minu;

destination(){
name = "jimma";
dist = 133.56;
hr = 7;
minu = 30;
}
void input(int &a,int &b);

};
void  destination :: input(int &a,int &b)
{
  cout<<name<<endl<<dist<<endl<<hr<<endl<<minu<<endl;
}
class person{
public:
string name;
string papa;
int age;
person(){
name ="pet de joy";
papa = "bekana";
age = 21;

}
//we need to create a object here inorder to call as parameters
void display(person person){
cout<<name<<endl<<papa<<endl<<age<<endl;

}
};

int main(){
    destination des;
    int c = 8,d =8;
  des.input(c,d);
person p ;
p.display(p);
return 0;
}/*
#include<iostream>
using namespace std;
class food{
public :
 string fruit;
 string vegetables;
food(){
string fr = "bean",veg = " cabaje";
fruit= fr;
vegetables = veg;
}
void display(){
cout<<fruit<<endl<<vegetables<<endl;
}
};
int main(){
food f
;f.display();

return 0;
*/








