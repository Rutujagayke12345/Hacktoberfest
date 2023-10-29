#include<iostream>
#include<climits>
using namespace std;
int main()
{
int a[]={5, 2, 1, 8, 3};
int ans=INT_MIN;
int ans1=INT_MIN;


for(int i=0;i<5;i++)
{ 
  if(a[i]>ans)
  {
   ans1=ans;
   ans=a[i];
  }
 else 
  {
    if(a[i]>ans1 && a[i]<ans)
    { ans1=a[i];
    }
  }
}
cout<<ans1<<" ";
}
