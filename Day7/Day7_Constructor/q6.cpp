#include<iostream>
#include<string>
using namespace std;
class Movie
{
    private:
    string title;
     int reating;
      
     public:
     Movie(){
        title="amar jawan";
        reating=5;
     }
     void dispaly(){
        cout<<"title="<<title<<endl;
        cout<<"reating="<<reating<<endl;
     }
};
int main(){
   Movie m;
   m.dispaly();
    
}