#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>> grid; 
        int r=grid.size();
        int c=grid[0].size();
        //checking wherter first elemnt of column 0 of each row  is one or not 
        for(int i=0;i< r;i++){
            if(grid[i][0]==0){
                for(int j=0;j<c;j++){
                    if (grid[i][j]==0){
                        grid[i][j]=1;
                    }
                    else{
                        grid[i][j]=0;
                    }
                }
            }
        }
        // maximum number of ones in column ;
        for(int i=0;i<c;i++){
        int z=0;
        int o=0;
            for(int j=0;j<r;j++){
                if(grid[j][i]==1){
                    o++;
                }
                else{
                    z++;
                }
            }
            if(z>o)
        for(int k=0;k<r;k++){
            if(grid[k][i]==0)grid[k][i]=1;
            else grid[k][i]=0;
        }
    }
        int sum=0;
        for(int i=0;i<r;i++){
            int x=1;
            for(int j=c-1;j>=0;j-- ){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        cout<< sum;      
    }