#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std;
char array1[10][10];
int x,y,spxx,spyy,s;
class wildtiger{
public:
int startpos_x,startpos_y;
double s;
void changepos(int spx, int spy){
//cout<<"startpos_x:"<<spx<<endl;
//cout<<"startpos_y:"<<spy<<endl;
x=rand()%11;
y=rand()%11;
array1[spx][spy]='0';
array1[x][y]='*';
spxx=x;
spyy=y;
//cout<<"x:"<<x<<endl;
//cout<<"y"<<y<<endl;
s=sqrt(pow((spx-x),2)+pow((spy-y),2));
//cout<<"s:"<<s<<endl;
x=0;
y=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        cout<<array1[i][j];
    }
    cout<<""<<endl;
}
s=0;
}

};

int main()
{

wildtiger wt;
wt.startpos_x=0;
wt.startpos_y=0;
wt.s=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        array1[i][j]='0';
        //cout<<array1[i][j];
    }
    //cout<<""<<endl;
}
while(true){
wt.changepos(wt.startpos_x,wt.startpos_y);
wt.startpos_x=spxx;
wt.startpos_y=spyy;
Sleep(5000);
}

    return 0;
}
