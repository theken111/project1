#include <iostream>
#include<time.h>
using namespace std;
class SoPhuc
        {
    private:
    double PThuc;
    double PAo;
    public:
    SoPhuc(){
        PThuc=0;
        PAo=0;
    }
    SoPhuc(double thuc,double ao){
        PThuc=thuc;
        PAo=ao;
    }
    void OutPut(void){
        cout<<PThuc<<" + "<<PAo<<"i"<<endl;
    }
    SoPhuc operator- ()
          {
             PThuc = -PThuc;
             PAo = -PAo;
             return  SoPhuc(PThuc, PAo);
          }
};
int main()
{   clock_t start,stop;
    double timerun;
    start=clock();
    SoPhuc S1(2,4);
    SoPhuc S2(3,5);
    SoPhuc S3(0,0);

    S3=-S1;
    S1.OutPut();
    S2.OutPut();
    S3.OutPut();
   stop=clock();
   timerun=(double)(stop-start);
   cout<<endl<<"timerun:"<<timerun;
}

