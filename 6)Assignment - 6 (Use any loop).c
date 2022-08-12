                                               //Assignment - 6 (Use any loop)(completsd)

//1. Write a program to calculate sum of first N natural numbers

     /*#include<stdio.h>
     int main()
     {
         int n,sum=0,i;
         printf("Enter n number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             sum=sum+i;
         }
         printf("%d",sum);
     }*/
//2. Write a program to calculate sum of first N even natural numbers

     /*#include<stdio.h>
     int main()
     {
         int n,i,sum=0;
         printf("Enter n number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             if(i%2==0)
             {
                 sum=sum+i;
             }
         }
         printf("%d",sum);
     }*/
//3. Write a program to calculate sum of first N odd natural numbers

/*#include<stdio.h>
     int main()
     {
         int n,i,sum=0;
         printf("Enter n number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             if(i%2!=0)
             {
                 sum=sum+i;
             }
         }
         printf("%d",sum);
     }*/

//4. Write a program to calculate sum of squares of first N natural numbers

 /*#include<stdio.h>
     int main()
     {
         int n,sum=0,i;
         printf("Enter n number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             sum=sum+i*i;
         }
         printf("%d",sum);
     }*/

//5. Write a program to calculate sum of cubes of first N natural numbers

    /*#include<stdio.h>
     int main()
     {
         int n,sum=0,i;
         printf("Enter n number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             sum=sum+i*i*i;
         }
         printf("%d",sum);
     }*/

//6. Write a program to calculate factorial of a number

    /*#include<stdio.h>
    int main()
    {
        int n,fac=1,i;
        printf("Enter a number");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
         fac=fac*i;
        }
        printf("%d",fac);
    }*/

//7. Write a program to count digits in a given number

     /*#include<stdio.h>
     int main()
     {
         int n,c=0;
         printf("Enter a number");
         scanf("%d",&n);
         while(n>0)
         {
             c++;
             n=n/10;
         }
         printf("%d",c);
     }*/

//8. Write a program to check whether a given number is a Prime number or not

     /*#include<stdio.h>
     int main()
     {
         int n,c=0,i;
         printf("Enter a number");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             if(n%i==0)
             {
                 c++;
             }
             if(c>2)
             break;
         }
         if(c==2)
         printf("number is prime number");
         else
         printf("number is not prime number");
     }*/

//9. Write a program to calculate LCM of two numbers

   /*#include<stdio.h>
   int main()
   {
       int n,m,x,lcm=1,i;
       printf("Enter two numbers");
       scanf("%d%d",&n,&m);
      x=n<m?n:m;
      for(i=x;i>=2;i--)
      {
          if(n%i==0&&m%i==0)
          {
             lcm=lcm*i;
             n=n/i;
             m=m/i;
          }

      }
      lcm=lcm*n*m;
      printf("%d",lcm);
   }*/

//10. Write a program to reverse a given number

  #include<stdio.h>
   int main()
   {
       int n,x=0,l;
       printf("Enter a number");
       scanf("%d",&n);
       while(n>0)
       {
          l=n%10;
          x=x*10+l;
          n=n/10;
       }
       printf("%d",x);

   }


