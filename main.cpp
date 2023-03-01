#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std;
class wildtiger{
public:
int startpos_x,startpos_y,x,y;
double s;
char array1[10][10];
void init(){
startpos_x=0;
startpos_y=0;
s=0;
for(int i =0;i<10;i++){
    for(int j=0;j<10;j++){
        array1[i][j]='0';
        //cout<<array1[i][j];
    }
    //cout<<""<<endl;
}


}
void changepos(){
//cout<<"startpos_x:"<<spx<<endl;
//cout<<"startpos_y:"<<spy<<endl;
x=rand()%11;
y=rand()%11;
array1[startpos_x][startpos_y]='0';
array1[x][y]='*';
startpos_x=x;
startpos_y=y;
//cout<<"x:"<<x<<endl;
//cout<<"y"<<y<<endl;
s=sqrt(pow((startpos_x-x),2)+pow((startpos_y-y),2));
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
wt.init();
while(true){
wt.changepos();
Sleep(5000);
}
    return 0;
}
