#include<iostream>
using namespace std;

// creating a class named complex
int main()
{
    int i,n;
    int j;
    //cin>>n;
   // cout<<n;
    // i have to print pattern
    n=3;
    i=1;
    while(i<=n)
    {
        //printf("*****");          //So my problem after running the 1st loop the 2nd loop is run for 1 time again when 1st loop run then 2nd loop doesn't run.
        while(j<=5)
        {
            cout<<"*";
            j=j+1;
        }
        
        cout<<"\n";
        i=i+1;
    }
    return 9;
}
