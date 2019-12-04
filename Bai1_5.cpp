#include <iostream>

using namespace std;

int main()
{   float x,y,s,p,total;
    cout<<"nhap x: "<<endl;cin>>x;
    cout<<"nhap y: "<<endl;cin>>y;
    p=x+y;
    s=x*y;
    total=s*2+p*(s-x)*(p+y);
    cout << "Total : "<<total<<endl;



    return 0;
}

