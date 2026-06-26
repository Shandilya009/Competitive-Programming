 #include<bits/stdc++.h>
using namespace std;

int main(){
    int s=0;
    while(s<=17){
        int x;
        cin>>x;
        s=x;
        if(x==15||x==16){
            cout<<"System won"<<endl;
            break;
        }
        if(x==1){
            x++;
        }
        else if(2-x==1||5-x==1||8-x==1||11-x==1||14-x==1){
            x++;
        }
        else{
            x+=2;
        }
        cout<<x<<endl;
    }
    return 0;
}