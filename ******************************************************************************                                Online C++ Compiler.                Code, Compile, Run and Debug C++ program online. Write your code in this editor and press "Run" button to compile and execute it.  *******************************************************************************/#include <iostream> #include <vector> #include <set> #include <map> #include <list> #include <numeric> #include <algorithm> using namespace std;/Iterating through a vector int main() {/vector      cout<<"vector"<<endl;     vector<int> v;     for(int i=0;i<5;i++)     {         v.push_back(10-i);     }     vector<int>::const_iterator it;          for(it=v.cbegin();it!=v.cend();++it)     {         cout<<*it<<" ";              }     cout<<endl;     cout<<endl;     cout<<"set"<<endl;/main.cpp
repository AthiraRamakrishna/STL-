/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

//Iterating through a vector
int main()
{
    //vector 
    cout<<"vector"<<endl;
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(10-i);
    }
    vector<int>::const_iterator it;
    
    for(it=v.cbegin();it!=v.cend();++it)
    {
        cout<<*it<<" ";
        
    }
    cout<<endl;
    cout<<endl;
    cout<<"set"<<endl;
    //set  --- the data entered is always sorted
    set<int> s;
    for(int i =0;i<5;i++)
    {
        s.insert(10-i);
    }
    set<int>::const_iterator it_s;
    it_s=s.cbegin();
    while(it_s!=s.cend())
    {
        cout<<*it_s<<" ";
        ++it_s;
    }
    cout<<endl;
    cout<<endl;
    
    cout<<"map"<<endl;
    map<int,string> m;
    m.insert(make_pair(10,"ten"));
    m.insert(make_pair(9,"nine"));
    m.insert(make_pair(8,"eight"));
    m.insert(make_pair(7,"seven"));
    m.insert(make_pair(6,"six"));
    
    auto it_m =m.begin();
    while(it_m!=m.end())
    {
        cout<<it_m->first<<"-->"<<it_m->second<<endl;
        ++it_m;
    }
    cout<<endl;
    
    cout<<"list"<<endl;
    list<int> li(6);
    iota(li.begin(),li.end(),0);
    auto it_l=li.begin();
    while(it_l!=li.end())
    {
        cout<<*it_l<<" ";
        ++it_l;
    }
    it_l =find(li.begin(),li.end(),3);
    if(it_l!=li.end())
    {
        li.insert(it_l,8);
    }
    it_l=li.begin();
    cout<<endl;
    while(it_l!=li.end())
    {
        cout<<*it_l<<" ";
        ++it_l;
    }
}
