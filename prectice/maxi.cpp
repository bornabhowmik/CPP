#include<iostream>

using namespace std;

int my_maxi(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b;
    cin>>a>>b;
    int mn=my_maxi(a,b);
    cout<<mn<<endl;
    
    return 0;
}