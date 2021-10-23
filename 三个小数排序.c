#include<stdio.h>
int main() { 
  
  float a,b,c,d;
scanf("%f%f%f",&a,&b,&c);
if ( a>b ) {d=a;a=b;b=d;}
if ( a>c ) {d=a;a=c;c=d;}
if ( b>c ) {d=b;b=c;c=d;}
printf("%.1f %.1f %.1f",a,b,c);

return 0;

}
