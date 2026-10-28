#include<bits/stdc++.h>
using namespace std;

// Encapsulation means keeping data and the methods that work on it together in a class,
// while restricting direct access to the data. For example, a bank account keeps its
// balance private and lets you change it only through methods like deposit() or withdraw().
class Encapsulation{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        vector<string> PublishedVideo;
    public:
        Encapsulation(string Name,string OwnerName){
        this->Name=Name;
        this->OwnerName=OwnerName;
        SubscriberCount=0;
        }
        void getInfo(){
            cout << Name << endl;
            cout << OwnerName << endl;
            cout << SubscriberCount << endl;
            for(auto it:PublishedVideo){
                cout<<it<<" ";
            }
            cout<<endl;

        cout<<"*****************************************************************"<<endl;
        }    
        void Subscribe(){
            SubscriberCount++;
        }
        void UnSubscribe(){
            if(SubscriberCount>0)
            SubscriberCount--;
        }
        void getSubs(){
            cout<<SubscriberCount<<endl;
        }

};

int main(){
    Encapsulation yt("Vidya","Vibhor");
    yt.Subscribe();
    yt.getSubs();
    yt.UnSubscribe();
    yt.getSubs();
    yt.UnSubscribe();
    yt.getSubs();
}