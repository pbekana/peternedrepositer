#include <iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<unordered_map>
using namespace std;
#include<cstring>
/*struct music{
int note;
string type;
*/


int main (){
    // sortting elements in descending way
   int desc[4] ={1,4,2,5};
    int n = sizeof(desc) / sizeof(desc[0]);
 sort(desc,desc + n,greater<int>());

cout<<"descending array "<<endl;

for(int i =0 ;i<4;i++)
    cout<<desc[i]<< " ";

  int count[4] ={1,4,2,5};
    int m = sizeof(count) / sizeof(count[0]);
int odd_count = 0;

cout<<"occurence of odd elemnets array "<<endl;

for(int i =0 ;i<4;i++){

        if(count[i] % 2 != 0)
        {
    odd_count++;
    cout<< " ";
}
        }
 cout<<"this is occurence of odd numbers"<<odd_count;

/* // sortting elements in reverse way
   int sort[4] ={1,4,2,5};
    int n = sizeof(sort) / sizeof(sort[0]);
 reverse(sort,sort + n);

cout<<"reversed array "<<endl;

for(int i =0 ;i<4;i++)
    cout<<sort[i]<< " ";*/




   /* // sortting elements in reverse way
   int sort[4] ={1,4,2,5};
    int n = sizeof(sort) / sizeof(sort[0]);
 reverse(sort,sort + n);

cout<<"reversed array "<<endl;

for(int i =0 ;i<4;i++)
    cout<<sort[i]<< " ";*/
    /*unordered_map<int,int >freq;
  int mostfrequent,maxfreq=0;

      for(int j = 0;j<8;j++){
    freq[mosts[j]]++;
 if(freq[mosts[j]] > maxfreq){

   maxfreq = freq[mosts[j]];
    mostfrequent = mosts[j];
 }}
 cout<<"the most frequent element is is "<<mostfrequent<<endl;
*/
 /*int odd [3] ={2,5,6};
 int even = od[0];
 for(int i = 0;i<3;i++)
  {
      if(odd[i] % 2 == 0){
      even = odd[i];

      }  }
cout<<even;*/
/*int mul[2][2] = {{1,2},{3,4}};
int mu[2][2] = {{1,2},{3,4}};
int resut[2][2];
 int muls = 1;
 /
 for(int i = 0;i<2;i++)
  {
      for(int j = 0;j<2;j++){
       cout<<mul[i][j]<<" ";

      }
      cout<<endl;
      }
      cout<<endl;
            for(int k =0;k<2;k++){
                for(int l = 0;l<2;l++){

cout<<mu[k][l]<<" ";
                }
    cout<<endl; }
// multiply matrix

      for(int i = 0;i<2;i++){
            for(int j =0;j<2;j++){
                    resut[i][j] = 0;
                for(int l = 0;l<2;l++){
                        resut[i] [j]+=mul[i][l] *mu[l][j];

                }
            }
      }


      for(int j = 0;j<2;j++){
            for(int k =0;k<2;k++){

    cout<<resut[j][k]<<" ";

                }
                cout<<endl;
            }*/

 /*int add[4] = {1,2,3,4};
 int largest = add[0];
cout<<"the sum is "<<endl;
for(int i = 0;i<4;i++)
{
    if(largest >add[i])
{
    largest = add[i];
}

    }
cout<<"the largest element is :"<<largest;*/
/* music *m= new music;// we need to modify the variable of structure
   m->note = -7;
   m-> = "regge";
cout<<m->note<<endl<<m->type<<endl;
delete m;// memory dealocate*/
/*struct music{
int note;
string type;

};

int main (){
    char ch[4] = "arm";
    char ca[5] = "ab";

    cout<<ch<<endl;
    for(int j = 0;j<5;j++)
        cout<<ca[j]<<endl;
int array[4] = {1,2,3};
char cop[10] ;
strcpy(cop," liverpool");
strcat(cop,"  are kings of england");
cout<<cop<<endl;
char s1[12] = "aac";
string mine = s1;
cout<<mine<<endl;
cout<<mine.c_str()<<endl;
char s2[12] = "aad";
char food [5][10] = {"lemon","apple","juice","bean","lentil"};
for(int i =0;i<5;i++)
cout<<i<<"\t"<<food[i]<<endl;
string num[5] = { "one","two","three","four","five"};
for(int  j = 0;j<5;j++)
cout<<"numbers"<<j<<" = "<<num[j]<<endl;
music m;
m.note = -7;
m.type = "regge";
cout<<m.note<<endl<<m.type<<endl;*/
return 0;
}

