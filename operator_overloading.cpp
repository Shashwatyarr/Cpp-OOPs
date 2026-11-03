#include<bits/stdc++.h>
using namespace std;


struct YoutubeChannel{
    string name;
    int subscriberCount;

    YoutubeChannel(string name,int subscriberCount){
        this->name=name;
        this->subscriberCount=subscriberCount;
    }
    bool operator == (const YoutubeChannel& channel)const{
        return this->name==channel.name;
    }
};

ostream& operator << (ostream& cout_kro,const YoutubeChannel& yt){

    cout_kro<<"Name: "<<yt.name<<endl;
    cout_kro<<"Count: "<<yt.subscriberCount<<endl;
    return cout_kro;
}

struct Collection{
    vector<YoutubeChannel> mychannels;
    void operator += (const YoutubeChannel& yt){
        this->mychannels.push_back(yt);
    }
    void operator -= (const YoutubeChannel& yt){
        this->mychannels.erase(
            remove(this->mychannels.begin(), this->mychannels.end(), yt),
            this->mychannels.end()
        );
    }
};

ostream& operator << (ostream& os, const Collection& collection){
    for (const auto& yt : collection.mychannels){
        os << yt << endl;
    }
    return os;
}

int main(){
    YoutubeChannel yt1=YoutubeChannel("MrBeast",30);
    YoutubeChannel yt2=YoutubeChannel("BeastBoy",30083209);
    Collection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection-=yt1;
    cout << yt1 << endl;
    cout << yt2 << endl;
    cout << myCollection << endl;
}