#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*
vector<int> vec;

vec.push_back(1);

vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(1);

vec.pop_back();



cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;

for(int val:vec)
{
    cout<<val<<" ";
}
cout<<endl;

cout<<"value of index 2 is :"<<vec[2]<<"or : "<< vec.at(2)<<endl;

cout<<"front element of vector :"<<vec.front()<<endl;
cout<<"back element of vetor :"<<vec.back()<<endl;

*/

/*  vector intillize array like  
vector<int> vec = {1,2,3,4,5};

for(int val:vec)
{
    cout<<val<<" ";
}
cout<<endl;



 */


 /*  some extra method 
 
 1. erase
 2. insert
 3. clear
 4. empty

 
 
 */

 /*
vector<int> vec={1,2,3,4,5,6,7,8,9,10};
cout<<vec.erase(vec.begin());
// output -> 2,3,4,5,6,7,8,9,10

cout<<vec.erase(vec.begin()+5);
// output  -> 2,3,4,5,7,8,9,10
*/





// ITERATOR -> LOOPING

// VEC.BEGIN()-> POINT TO THE FIRST VALUE
// VEC.END()-> POINT TO THE LAST VALUE

vector<int> vec;
vec.push_back(1);

vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);

vector<int>::iterator it;
for(it=vec.begin();it!=vec.end();it++)
{
    cout<<*(it);
}
cout<<endl;
for(auto it=vec.rbegin();it!=vec.rend();it++)
{
    cout<<*(it);
}

}