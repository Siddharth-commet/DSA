#include<bits/stdc++.h>
#include<utility>
using namespace std;

void explainPair(){
    pair<int , int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int ,pair<int, int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<endl;
    return;
}

void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.push_back({1,2});


    vector<int> vect(5,100);
    vector<int> ve(5);

    vector<int> v1(5,20);
    vector<int> v2 (v1);

    vector<int>::iterator it = vect.begin(); // here 'it' points to address of first element in vect


    vector<int> sampleVector = {10,15,5,8,6};

    for (vector<int>::iterator it = sampleVector.begin(); it!= sampleVector.end() ; it++) // Printing a vector M-1
    {
        cout<<*(it)<<endl;
    }

    cout<<"========="<<endl;
    
    // for (auto it = sampleVector.begin(); it != sampleVector.end(); it++) // Printing a vector M-2
    // {
    //     cout<<*(it)<<endl;
    // }
    // cout<<"========="<<endl;

  


    // sampleVector.erase(sampleVector.begin()+1); // ERASE function




    sampleVector.erase(sampleVector.begin()+1,sampleVector.end()-2);

    for (auto it : sampleVector)
    {
        cout<<it<<endl;
    }


    vector<int> sampleVector2(2,100);
    
    sampleVector2.insert(sampleVector2.begin(),300);
    sampleVector2.insert(sampleVector2.begin()+1, 2, 10);

    cout<<"========================="<<endl;

    for (auto it : sampleVector2)
    {
        cout<<it<<endl;
    }

    cout<<"========================="<<endl;

    cout<<sampleVector2.size()<<endl;

    cout<<"========================="<<endl;

    // COPY paste another vector
    vector<int> copy(2,13);

    sampleVector2.insert(sampleVector2.begin(),copy.begin(),copy.end());

    for(auto it = sampleVector2.begin(); it!= sampleVector2.end(); it++){

        cout<<*(it)<<endl;
    }
}


void explainLists(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(6);

    for (auto its : ls)
    {
        cout<<its<<endl;
    }
    
}

int main(){
    explainLists();
    return 0;
}
