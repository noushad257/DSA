#include<iostream>
using namespace std;

int main(){
   int a=4;
   int b=6;

   cout<<"a and b "<<(a&b)<<endl;
   cout<<"a or b "<<(a|b)<<endl;
   cout<<" ~a  "<<~a <<endl;
   cout<<"a ^ b "<<(a^b)<<endl;

   //  left shift right shift

   cout<<(17>>1)<<endl;
   cout<<(17>>2)<<endl;
   cout<<(17<<1)<<endl;
   cout<<(17<<2)<<endl;

   //increment decrement

   int i=10;
   cout<<(++i)<<endl;
   //11
   cout<<(i++)<<endl;
   //11 -->i=12
   cout<<(i--)<<endl;
   //12 -->i=11
   cout<<(--i)<<endl;
   //10


}
