#include<iostream>
using namespace std;
int main()
{
int a[]={5, 2, 1, 8, 3};
int ans=INT_MAX;
int ans1=INT_MAX;


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
