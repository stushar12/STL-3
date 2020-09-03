#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,less<int>> Set;
    Set.insert(1);
    Set.insert(10);
    Set.insert(12);
    Set.insert(10);
    Set.insert(10);
    Set.insert(17);
    Set.insert(13);
    Set.insert(8);
    Set.insert(11);
    Set.insert(7);
    
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
