#include<bits/stdc++.h>
using namespace std;

class Instrument{
    public:
        // virtual void makeSound(){ //virtual functions
        //     cout<<"Instrument is playing..."<<endl;
        // }
        virtual void makeSound()=0;//pure virtual fucntion, if a class has atleast one pure virtual function it becomes an abstract class
};

class Accordion:public Instrument{
    public:
        void makeSound(){
            cout<<"Accordian is playing..."<<endl;
        }
};

class Piano:public Instrument{
    public:
        void makeSound(){
            cout<<"Piano is playing..."<<endl;
        }
};

int main(){
    Instrument* i=new Accordion();
    Instrument* i2=new Piano();

    Instrument* instruments[]={new Accordion(),new Piano()};
        
    for(auto it:instruments){
        it->makeSound();
    }
    i->makeSound();
    i2->makeSound();
}
