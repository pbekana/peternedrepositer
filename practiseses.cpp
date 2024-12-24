#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

int c[7] = {1,5,4,4,2,3,4};
unordered_map<int,int>freq;
int mfreq,maxfreq = 0;
for(int i = 0;i<7;i++){
freq[c[i]]++;
if(freq[c[i]] > maxfreq)
{
 freq[c[i]] = maxfreq;
  mfreq = c[i];
}
}
cout<<"most frequent element in an array is: "<<mfreq;

return 0;
}
