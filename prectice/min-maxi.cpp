#include<iostream>

using namespace std;

int my_min(int a,int b){
    if(a<b) return a;
    else return b;
}

int my_maxi(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b;
    cin>>a>>b;
    int mn=my_min(a,b);
    int mx=my_maxi(a,b);
    cout<<mn<<" "<<mx<<endl;

    return 0;
}
