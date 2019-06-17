#include<iostream>
#include <cmath>
using namespace std;
int prime(int m);
int abc(int m,int num);

int main(){


int a,m,num,p,t=1;
cin>>a;
p=prime(m);
if(p==2)
   {
     cout<<m<<"\n";
   }
while(t<=10)
{
cin>>m;
cin>>num;
abc(m,num);
cout<<"\n";
t++;

}

return 0;
}

int abc(int m,int num)
{
int p;
while(m<=num)
{
p=prime(m);
if(p==1)
   {
     if(m!=1)
	cout<<m<<"\n";
   }
m++;
}
}



int prime(int m)
{
int p=0;
for(int i=1; i<=sqrt(m); i++)
   {
      if(m%i==0)
      {
	 p++;
      }
}
   
return p;
}

