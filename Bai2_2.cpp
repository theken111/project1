#include <iostream>

using namespace std;

int main()
{
   int i,value, arr[5]={};
   int *ptr=&value;
   for(i=0;i<5;i++){
       cout<<"nhap so thu "<<i<<":"<<endl;
       cin>>*ptr;
       arr[i]=*ptr;

   }

   for(i=0;i<5;i++){
       ptr=&arr[i];
       cout<<*ptr<<"  ";
   }

   return 0;
}

