#include<stdio.h>
int gcd(int a,int b)
{int r;
 while(r=a%b)
 {a=b;b=r;}
 return b;
}
int lcm(int a,int b)
{return a*b/gcd(a,b);
}
int main()
{int n,a,b;
 scanf("%d%d",&n,&a);
 for(n--;n--;)
   {scanf("%d",&b);
    a=lcm(a,b);
   }  
 printf("%d\n",a);
 return 0;
}
