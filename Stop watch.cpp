#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<unistd.h>
int main(){
    int h=0,m=0,s=0;
    char c;
    cout<<"Enter s button to start stopwatch :\n";
    cin>> c;
    if(c!='s'){
        while(c!='s'){
            cout<<" You entered wrong button ";
            cout<<"Please enrer s : ";
            cin>>c;
        }
    }
    if(c=='s'){
        while(!kbhit()){
            cout<<h<<" : "<<m<<": "<<s;
            s++;
            sleep(1);
            system("cls");
            if(s==60){
                m++;
                s=0
            }
            if(m==60){
                h++;
                m=0;
            }
        }
    }
    return 0;
}ss