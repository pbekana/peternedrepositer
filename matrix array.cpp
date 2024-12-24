#include<iostream>
using namespace std;
int main(){
    int sum [2][2];
int matrix[2][2];
int size;
cout<<" enter size of an array"<<endl;
cin>>size;
for(int i = 0;i<size;i++)
{
for(int j = 0;j<size;j++){
cin>>matrix[i][j];

}

}
cout<<"display element of an array"<<endl;
for(int i = 0;i<size;i++)
{
for(int j = 0;j<size;j++){
cout<<matrix[i][j]<<" ";

}
cout<<endl;
}


/*nt matrixs[2][2];

cout<<" enter size of an array"<<endl;
for(int i = 0;i<size;i++)
{
for(int j = 0;j<size;j++){
cin>>matrix[i][j];

}

}
cout<<"display element of an array"<<endl;
for(int i = 0;i<size;i++)
{
for(int j = 0;j<size;j++){
cout<<matrix[i][j]<<" ";

}
cout<<endl;
}*/
int count = 0;
cout<<" numbers of numbers of an array of even numbers is :";
for(int i = 0;i<size;i++)
{
   for(int j = 0;j<size;j++)
    {
        if( matrix[i][j] % 2 == 0){

           count++;
        }

    }
}
cout<<count;








    return 0;
}
