#include <bits/stdc++.h>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    vector<string> PublishedVideoTitles;
    
};

int main()
{
    YoutubeChannel yt;
    yt.Name = "MrBeast";
    yt.OwnerName = "Max";
    yt.SubscriberCount = 500;
    yt.PublishedVideoTitles = {"100k givaaway"};

    cout << yt.Name << endl;
    cout << yt.OwnerName << endl;
    cout << yt.SubscriberCount << endl;
    cout << yt.PublishedVideoTitles[0] << endl;

    cout<<"*****************************************************************"<<endl;

    YoutubeChannel yt1;
    yt1.Name = "Vidya";
    yt1.OwnerName = "Vibhor";
    yt1.SubscriberCount = 12;
    yt1.PublishedVideoTitles = {"Shaadi Vlog"};

    cout << yt1.Name << endl;
    cout << yt1.OwnerName << endl;
    cout << yt1.SubscriberCount << endl;
    cout << yt1.PublishedVideoTitles[0] << endl;

    cout<<"******************************************************************"<<endl;
}