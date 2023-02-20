#include <iostream>
using namespace std;
int main(){
    int a;
    for(int i=0;i<10;i++){
        cout<<"\nenter the number:"<<endl;
        cin<<"%d",&a;
        if(a==5){
            cout<<"Got it bro!"<<endl;
            i=10;
        }
        else if(a>5){
            cout<<"Your guess is too high"<<endl;
        }
        else if(a<5){
            cout<<"Your guess is too low"<<endl;
        }
    }
    return 0;
}
