#include<iostream>
using namespace std;
int my_maxi(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int mx=my_maxi(a,b);
    cout<<mx<<endl;

    return 0;
}