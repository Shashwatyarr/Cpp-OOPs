#include<bits/stdc++.h>
using namespace std;

class Poly{
    protected:    
        string OwnerName;
        int popularity;
    private:
        string Name;
        int SubscriberCount;
        vector<string> PublishedVideo;
    public:
        Poly(string Name,string OwnerName){
        this->Name=Name;
        this->OwnerName=OwnerName;
        SubscriberCount=0;
        popularity=0;
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
        void Analytics(){
            if(popularity<5) cout<<Name<<" has bad quality content"<<endl;
            else cout<<Name<<" has good quality content"<<endl;
        }
};

class InheritedClass1: public Poly{
    public:
        InheritedClass1(string name,string ownername):Poly(name,ownername){}
        void practice(){
            cout<<OwnerName + " is "<<"practice, learning, experimenting"<<endl;
            popularity++;
        }
};

class InheritedClass2: public Poly{
    public:
        InheritedClass2(string name,string ownername):Poly(name,ownername){}
        void practice(){
            cout<<OwnerName + " is "<<"singing, writing, classes, dance"<<endl;
            popularity++;
        }
};

int main(){
    Poly yt("vidya","vibhor");
    InheritedClass1 pyt("Amy","kitchen");
    InheritedClass2 syt("harry","Styles");
    yt.PublishVideo("College VLog");
    yt.PublishVideo("Dsa Series");
    yt.Subscribe();
    yt.Subscribe();
    yt.getInfo();
    pyt.practice();
    syt.practice();
    syt.practice();
    syt.practice();
    syt.practice();
    pyt.Analytics();
    syt.Analytics();
    Poly* x=&syt;
    Poly* y=&pyt;
    x->Analytics();
    y->Analytics();
}