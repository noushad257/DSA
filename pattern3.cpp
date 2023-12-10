

/*
   1 1 1 1
   2 2 2
   3 3
   4
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1){
           cout<<i;
           j++;
        }
        cout<<endl;
        i++;



    }




}



/*
Outer Loop (while (i <= n)):

This loop controls the number of rows in the pattern. It runs from i = 1 to n.
In our example with n = 4, it runs for i = 1, 2, 3, 4, representing each row.
Inner Loop (while (j <= n - i + 1)):

This loop controls the printing of numbers in each row.
The condition j <= n - i + 1 ensures that the loop prints the correct number of elements in each row.
When i = 1, it prints n elements (4 elements in the first row).
When i = 2, it prints n - i + 1 elements (3 elements in the second row).
When i = 3, it prints n - i + 1 elements (2 elements in the third row).
When i = 4, it prints n - i + 1 elements (1 element in the fourth row).
Let's go through the first iteration of the outer loop (i = 1):

j starts from 1 and goes up to n - i + 1 = 4 - 1 + 1 = 4. So, it prints the value of i (1) four times.
Now, let's go through the second iteration of the outer loop (i = 2):

j starts from 1 and goes up to n - i + 1 = 4 - 2 + 1 = 3. So, it prints the value of i (2) three times.



*/
