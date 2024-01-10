#include<iostream>
using namespace std;

class Hero{
    // properties
    public:

int health;
char level;


};




int main(){
    //object bana diya class ka
    Hero ramesh;
    ramesh.health = 65;
    ramesh.level ='A';
   cout<<"health is "<<ramesh.health<<endl;
   cout<<"level is"<<ramesh.level<<endl;
    return 0;
}