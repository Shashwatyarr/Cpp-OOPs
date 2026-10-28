#include<bits/stdc++.h>
using namespace std;

class Inheritance{
    protected:    
        string OwnerName;
    private:
        string Name;
        int SubscriberCount;
        vector<string> PublishedVideo;
    public:
        Inheritance(string Name,string OwnerName){
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
        void PublishVideo(string a){
            PublishedVideo.push_back(a);
        }

};

class InheritedClass: public Inheritance{
    public:
        InheritedClass(string name,string ownername):Inheritance(name,ownername){}
        void practice(){
            cout<<OwnerName + " is "<<"practice, learning, experimenting"<<endl;
        }
};

int main(){
    Inheritance yt("vidya","vibhor");
    InheritedClass pyt("Amy","kitchen");
    yt.PublishVideo("College VLog");
    yt.PublishVideo("Dsa Series");
    yt.Subscribe();
    yt.Subscribe();
    yt.getInfo();
    pyt.practice();
}