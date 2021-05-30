#include <iostream>
#include <string>
#include <fstream>
#include "game_of_life.h"
using namespace std;

void game_of_life::iscrtaj(){


        char polje1[10][10];

    for(int i=0;i<=9;i++){
    for(int j=0;j<=9;j++){
        if(polje[i][j]==true){polje1[i][j]='#';}
        if(polje[i][j]==false){polje1[i][j]='_';}

        cout<<polje1[i][j];

    }
    cout<<endl;}
    cout<<endl;

}

void game_of_life::stvaranje(){

for(int i=0;i<=9;i++){
    for(int j=0;j<=9;j++){polje[i][j]=gen_rnd(0,3);}
    }
    for(int i=0;i<=9;i++){
    for(int j=0;j<=9;j++){
        polje[i][j]=blabla(provjera(i,j,polje),gaga(i,j,polje));
    }}
}

bool game_of_life::gaga(int i,int j, bool polje[10][10]){
    bool b=polje[i][j];
    return b;
}

int game_of_life::provjera(int i,int j,bool polje[10][10]){
int o=0;
    if(polje[i-1][j-1]!=false){o+=1;}
    if(polje[i-1][j]!=false){o+=1;}
    if(polje[i-1][j+1]!=false){o+=1;}
    if(polje[i][j-1]!=false){o+=1;}
    if(polje[i][j+1]!=false){o+=1;}
    if(polje[i+1][j-1]!=false){o+=1;}
    if(polje[i+1][j]!=false){o+=1;}
    if(polje[i+1][j+1]!=false){o+=1;}

return o;
}

bool game_of_life::blabla(int o,bool k){
if(o==2&&k==1){return 1;}
if(o==3&&k==1){return 1;}
if(o==3&&k==0){return 1;}
else{return 0;}
}

bool game_of_life::gen_rnd(int min,int max){
int f=rand()%(max-min+1)+min;
if (f==1){return true;}
else if (f==0||f==2||f==3){return false;}
}

game_of_life::game_of_life(){

}



