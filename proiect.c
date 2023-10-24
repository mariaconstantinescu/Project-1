#include <stdio.h>
#include <conio.h>

float curs( int i, int j);


 int main()
 {
    float val,rez;
    int  k,x,y,i,j ,ok=1;

while(ok==1){
        int v[3]={0}; int w[3]={0};

      printf("\n Value:");
      scanf("%f",&val);


  printf("\nFollowing are the Choices:"); //https://simple2code.com/c-programs/currency-conversion-program-in-c/
  printf("\nEnter 1: RON");
  printf("\nEnter 2: EUR");
  printf("\nEnter 3: USD");

      printf("\n Choose currency 1: ");
      scanf("%d",&x);
      printf("\n Choose currency 2: ");
      scanf("%d",&y);

      if(x==1)
        v[0]=1; //ron
      else
        if(x==2)
          v[1]=1; //eur
      else
        if(x==3)
         v[2]=1;  //usd

       if(y==1)
        w[0]=1; //ron
      else
        if(y==2)
         w[1]=1; //eur
      else
        if(y==3)
         w[2]=1; //usd

       for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        if(v[i]!=0 && w[j]!=0)
          rez=val*curs(i,j);

        printf("\n rezult:%f",rez);

        printf("\nFollowing are the Choices:");
  printf("\nEnter 1: continuare");
  printf("\nEnter 0: terminare\n");
       scanf("%d",&ok);

}

 }

 float curs(int i,int j)
 {   float a;
     if(i==0 && j==1)
        a=0.20; //ron in eur
    if(i==1 && j==0)
        a=4.91; //eur in ronx
     if(i==0 && j==2)
        a=0.22; //ron in usd
    if(i==2 && j==0)
        a=4.63; //usd in ron
    if(i==1 && j==2)
        a=1.06; //eur in usd
     if(i==2 && j==1)
        a=0.94;  //usd in eur

     return a;

 }
