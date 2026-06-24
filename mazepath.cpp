#include<iostream>
using namespace std;
// int maze(int sr,int sc,int er,int ec){
// if(sr>er || sc>ec) return 0;
// if(sc==ec && sr==er) return 1;
// int rightway=maze(sr,sc+1,er,ec);
// int leftway=maze(sr+1,sc,er,ec);
// return rightway + leftway;
//  }
void maze2(int sr,int sc,string s){
if(sr<1 || sc<1) return ;
if(sc==1 && sr==1) {
    cout<<s<<" "<<endl;
    
}
maze2(sr,sc-1,s+'R');
maze2(sr-1,sc,s+'D');
 }

int main(){
    // cout<<maze(1,1,5,5);
    maze2(5,5,"");
}