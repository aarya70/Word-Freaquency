#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    getline(cin,str);
    cout<<str;
    map<string,int> m;
    string wrd;

    for(auto it: str){
        if( it == ' '){
            m[wrd]++;
            wrd.clear();
        }
        else{
            wrd += it;
        }
    }

    cout<<endl<<"Freaquency of Each Word "<<endl;
    for( auto it: m){
        cout<<it.first<<" ->"<<it.second<<endl;
    }
  
}


