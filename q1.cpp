#include<iostream>
using namespace std;
int main(){
    int month[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    int j=0;
    int i= 1901;
    int day=1;
    int sunday=0;

    for(i=1901;i<2000;i++) {

        if( i % 4==0 ){
             month[1]=29;
        }
        else {
            month[1]=28;
        }

        for (j=0;j<12;j++){

            if (day % 7 ==0){
                sunday++;
            }
            day+=month[j];
           
        }
    }
    cout<< sunday<<endl;
    cin.ignore();
    return 0;
}