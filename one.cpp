#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,less<int>> Set;
   int x=1;
   int j;
   while(x)
   {    cout<<"Enter a number :"<<"\n";
       cin>>j;
       Set.insert(j);
        cout<<"\n"<<"Enter a choice :"<<"\n";
        cin>>x;

   }
    
    int i=0;
    set<int,greater<int>>:: iterator itr;  
    itr=Set.begin();
    int len=Set.size();
    while (len)
    {
        cout<<*itr<<" ";
        itr++;
        len--;
    }
}
