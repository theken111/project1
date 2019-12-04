#include <iostream>

using namespace std;

int main()
{   
    clock_t start,stop;
    double timerun;
    start=clock();
   
   
    float a,b;
    cout << "Nhap a: " << endl;cin>>a;
    cout << "Nhap b: " << endl;cin>>b;
    cout<<endl<<"tong : "<<a+b;
    cout<<endl<<"hieu : "<<a-b;
    cout<<endl<<"tich : "<<a*b;
    if(b==0){cout<<endl<<"a khong the chia dc cho b";}
    if(b!=0) {cout<<endl<<"thuong : "<<a/b; cout<<endl;}
    stop=clock();
    timerun=(double)(stop-start);
    cout<<endl<<"timerun:"<<timerun;
    return 0;
}

