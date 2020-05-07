#include <iostream>//stdio.h doesn't contain cin, cout
using namespace std;

long long int mex=10000009;//loop duration cannot be of order 10^8
bool arr[10000009];//int does not store true and false value

int main()
{
    long long int l,r,i;//int can't store numbers of order 10^7
   
    scanf("%d %d",&l,&r);
   
    long long int cnt=0;
    
    for(i=0;i<mex;i++) arr[i]=true;
    
    arr[0]=false;
    arr[1]=false;
   
    for(int i=2;i*i<=mex;i++)
    {
    	if(arr[i]==true){//as it needs to run only for prime numbers
        for(int j=2*i;j<=mex;j+=i)
        {
        arr[j]=false;
        }
        }
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==true) cnt++;
    }
   
    cout<<cnt<<endl;
    
    // for first commit
    // for 2nd commit
}
