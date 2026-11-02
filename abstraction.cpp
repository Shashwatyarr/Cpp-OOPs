#include<bits/stdc++.h>
using namespace std;

//hiding internal working of a system in order to make things simpler for the end users or to use only whats needed without worrying about how it works

// an abstract class has atleast one pure virtual function

class SmartPhone{
    public:
        virtual void TakeASelfie()=0;
};

class Android:public SmartPhone{
    public:
        void TakeASelfie(){
            cout<<"Selfie Clicked"<<endl;
        }
};

class IPhone:public SmartPhone{
    public:
        void TakeASelfie(){
            cout<<"Selfie Clicked"<<endl;
        }
};

int main(){
    SmartPhone* s1=new Android();
    SmartPhone* s2=new IPhone();

    s1->TakeASelfie();
    s2->TakeASelfie();
}
