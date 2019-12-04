#include <iostream>

using namespace std;
class SoPhuc
        {
    private:
    double PThuc;
    double PAo;
    public:
    void Constructor(){
        PThuc=0;
        PAo=0;
    }
    void InPut(double thuc,double ao){
        PThuc=thuc;
        PAo=ao;
    }
    void OutPut(void){
        cout<<PThuc<<" + "<<PAo<<"i"<<endl;
    }
    SoPhuc operator+(const SoPhuc& b)
     {
        SoPhuc a;
        a.PThuc = this->PThuc + b.PThuc;
        a.PAo = this->PAo + b.PAo;

        return a;
     }
};
int main()
{
    SoPhuc S1;
    SoPhuc S2;
    SoPhuc S3;
    S1.InPut(2,4);
    S2.InPut(3,5);
    S3=S1+S2;
    S1.OutPut();
    S2.OutPut();
    S3.OutPut();

}

