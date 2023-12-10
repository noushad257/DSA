#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=2;

    while(i<n)
    {
        //divisible by 0== not prime
        if(n%i==0){

           cout<<"not prime for "<<i<<endl;
        }

        else{
            cout<<"primefor "<<i<<endl;
        }
        i++;
    }







}
