
// this about predifined functions
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
using namespace std;\


int main (){
int sort[4] ={1,4,2,5};
    int n = sizeof(sort) / sizeof(sort[0]);
 reverse(sort,sort + n);

cout<<"reversed array "<<endl;

for(int i =0 ;i<4;i++)
    cout<<sort[i]<< " ";
 int occur[5] = {1,2,3,3,4};
 int count = 0;
  for(int i = 0;i<5;i++)
  {
if(occur[i] % 2 == 0){

   count ++;
}
  }
  cout<<"this is occurrence of even number :"<<count<<endl;
int mos[4] = {1,2,2,3};
unordered_map<int ,int>freq;
int mfrequen,maxfreq = 0;
for(int i = 0;i<4;i++){
freq [mos[i]]++;
if(freq[mos[i]] > maxfreq)
{
 maxfreq = freq[mos[i]];
 mfrequen = mos[i];

}}
int   row,col;
int matrix[row][col];
int add = 0;
cout<<"enter numbers of array of row and column :"<<endl;
cin>>row>>col;
for(int i = 0;i<row;i++){
for(int j = 0;j<col;j++)
{
    cin>>matrix[i][j];
    //cout<<"this are elements of array :"<<matrix[i][j]<<" " << " + ";
}

/*cout<<endl;}
int mam[row][col];
cout<<"enter second row and column of array :"<<endl;
for(int i = 0;i<row;i++){
for(int j = 0;j<col;j++)
{
    cin>>mam[i][j];
cout<<"this are elements of array :"<<mam[i][j]<<" ";
}
cout<<endl;
}
for(int k = 0;k<row;k++){
for(int l = 0;l<col;l++)
{

  add = add + matrix[k][l] + mam[k][l];
}
}*/
/*for(int n = 0;n<row;n++){
for(int m = 0;m<col;m++)
{
cout<<"the answer is :"<<add[n][m]<<" ";
}*/
}





return 0;
}
