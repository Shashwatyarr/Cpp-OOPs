#include <bits/stdc++.h>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    vector<string> PublishedVideoTitles;
    YoutubeChannel(string Name,string OwnerName){
        this->Name=Name;
        this->OwnerName=OwnerName;
        SubscriberCount=0;
    }
    void getInfo(){
        cout << Name << endl;
        cout << OwnerName << endl;
        cout << SubscriberCount << endl;
        for(auto it:PublishedVideoTitles){
            cout<<it<<" ";
        }
        cout<<endl;

    cout<<"*****************************************************************"<<endl;
    }
};

int main()
{
    YoutubeChannel yt("MrBeast","Max");
    yt.PublishedVideoTitles.push_back("100k Giveaways");
    YoutubeChannel yt1("Vidya","Vibhor");
    yt1.PublishedVideoTitles.push_back("Shaadi Vlog");
    yt1.PublishedVideoTitles.push_back("Baccha Vlog");
    yt.getInfo();
    yt1.getInfo();
}