#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    switch(t){
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        default:
            cout<<"Didn't match"<<endl;
    }
    return 0;
}