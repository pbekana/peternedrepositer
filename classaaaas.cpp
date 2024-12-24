
// this about predifined functions
#include <iostream>
#include<cmath>
using namespace std;\
class person{
public:
    int age;
string name;
void input(person p1);// fun
};

void person :: input(person p1){
cout<<"robel";
cout<<age<<endl<<name<<endl;

}
int main (){
    person p;
 p.age = 5;
p.name = "robel";
p.input(p);

return 0;
}
