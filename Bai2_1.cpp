#include <iostream>

using namespace std;

int main()
{
   int i, arr[5]={4,3 , 50 ,2,1},max=0;
   int *ptr;
   for(i=0;i<5;i++){
       ptr=&arr[i];
       if(*ptr>max) max= *ptr;

   }

   for(i=0;i<5;i++){
       ptr=&arr[i];
       cout<<*ptr<<"  ";
   }
   cout<<endl<<"max trong day so :"<<max<<endl;
   return 0;
}

