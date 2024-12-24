// this programm  display the three greates  arrays

#include<iostream>
using namespace std;
#include<algorithm>
struct student{
char name[50];
float mark;
char subjectname[50];
};
int main ()
{
int arr[5] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
for(int i =0;i<5;i++){

    cout<<arr[i]<< " ";
}
cout<<endl;
cout<<"greatest three elements "<<endl;
sort(arr,arr + size,greater<int>());
cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
//emp e= {"eden" ,1212,5675};
//cout<<dep.deparmentname<<endl<<dep.name<<endl;

//<<"array in reverse order "<<endl;
//for(int i= 0;i<4;i++){
/*<reverse(rev;,rev+size);
for(int i = 0;i<4;i++)*/
//per p;


 return 0;
}
