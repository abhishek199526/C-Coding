// ********************FOR LOOP   FACTORIL ***************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//       int  num, fac=1;
//       printf("Enter the number\n");
//       scanf("%d", &num);
// for( int i=1; i<=num;i++)
// fac=fac*i;
// printf(" The factorial of %d is: %d\n", num,fac);
//        return 0;
// }

//****************** While Loop     FACTORIL ************************************

// #include<stdio.h>
// #include<conio.h>

// int main(){
//      int  num, fac=1;
//       printf("Enter the number\n");
//       scanf("%d", &num);
//       int i =1;
//       while (i<=num)
//       {
//           fac=fac*i;i++;

//       }
//         printf(" The factorial of  %d is: %d\n", num,  fac);

//        return 0;
// }
// ****************************** DO WHILE      FACTORIAL*******************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//      int  num, fac=1;
//       printf("Enter the number\n");
//       scanf("%d", &num);
//       int i =1;
//       do
//       {
//           fac=fac*i;i++;

//       } while (i<=num);
//         printf(" The factorial of  %d is: %d\n", num,  fac);

//      return 0;
// }

//  ********************   FOR LOOP    N NUMBERS************************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//            int  num ;
//      printf("Enter the number\n");
//       scanf("%d", &num);
//      for( int i =1 ;  i<=num ;  i++)
//      printf("   \n %d\n", i);
//      return 0;
// }

// ****************************************************      WHILE LOOPP    N NUMBERS**************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//            int  num , i=1 ;
//      printf("Enter the number\n");
//       scanf("%d", &num);
//      while ( i<=num)
//      {printf("   \n %d\n", i);
//         i++;
//      }

//      return 0;
// }

// ************************************    do While     N NUMBERS********************************

// #include<stdio.h>
// #include<conio.h>

// int main(){
//            int  num , i=1 ;
//      printf("Enter the number\n");
//       scanf("%d", &num);
//      do
//      {printf("   \n %d\n", i);
//         i++;
//      } while ( i<=num);

//      return 0;
// }
// ***********************   FOR LOOP   " ODD AND EVEN *******************

// #include <stdio.h>
//  #include <conio.h>
// int main()
// {
//      int num, i = 0, evensum = 0, oddsum = 0;
//      printf("Enter the number\n");
//      scanf("%d", &num);
//      printf("Odd numbers between 1 to %d is\n ", num);
//      for (i=0; i <= num; i++)
//      {
//           if (i % 2 != 0)
//           {
//                printf("%d\n\n", i);
//                oddsum = oddsum + (i);
//           }
//      }
//      printf("Even numbers between 1 to %d is\n ", num);
//      for (i =1; i <= num; i++)
//      {
//           if (i % 2 == 0)
//           {
//                printf("%d\n\n", i);
//                evensum = evensum + (i);
//           }
//      }
//                printf("The sum of ODD numbers is : %d\n", oddsum);
//                printf("The sum of EVEN numbers is : %d\n", evensum);
//      return 0;
// }

// ******************************* For Loop   table *****************************

// #include<stdio.h>
// #include<conio.h>

// int main(){
//        int  num  ;
//       printf("Enter the number\n");
//       scanf("%d", &num);
//       printf("The table of %d is \n\n ", num);
//       for( int i=1;  i<=10;  ++i ){

// printf("%d * %d = %d \n", num,i,num*i);
// }
//       return 0;
// }

//   ***********************************   "" FIBONACCI SERIES   ""   ***********************

//  #include<stdio.h>
// #include<conio.h>

// int main(){
//     int  n,prev1,prev2,sum;
//     printf("Enter the length of fibonacci series \n");
//     scanf("%d", &n);
//     prev1=0;
//     prev2=1;
//     printf("%d %d", prev1, prev2);

//     for( int i=1; i<=(n-2); i++)
//     {
// sum= prev1+prev2;
// printf(" %d",sum);
// prev1=prev2;
// prev2=sum;
//     }
//           return 0;
// }
//  ***********************         PRIME NUMBER *************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//      int num;
//      printf("Enter The Number \n");
//      scanf("%d", &num);
//      int i=2;
//      while(i<=num-1){
//          if(num%i== 0){
//              printf("Not A Prime Number \n");
//              break;
//          }
//          i++;
//      }
//      if (i==num){
//          printf("Prime Number \n");

//      }
//      return 0;
// }

// ********************   """  SIMPLE STAR PATTERN  "" **********************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//     int ro, i, j;
//     printf("Enter the number\n");
//     scanf("%d", &ro);

//     for (i = 0; i <= ro; i++)
//     {
//         for (j = 0; j < i; j++)

//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// ***************************************  " STAR PATTERN IN OPPSITE ORDER   "   **********************

// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//         int num, i, j;
//         printf("Enter the number");
//         scanf("%d", &num);
//         for (i = 0; i < num; i++)
//         {
//                 for (j = 0; j < num; j++)

//                 {
//                         if ( i+j >=num-1)
//                         {
//                           printf(" * ");
//                         }

//                 }
//                 printf("\n");
//         }
//         return 0;
// }
// ****************************************   "FOR CENTRE STAR PATTERN "  *******************
//  #include <stdio.h>
// #include<conio.h>

// int main()
// {
//         int num, i, j;
//         printf("Enter the number");
//         scanf("%d", &num);
//         for (i = 0; i < num; i++)
//         {
//                 for (j = 0; j < 2*num; j++)

//                 {
//                         if ( j>=num-1-i  &&   j<=num-1+i)
//                         {
//                           printf("%d");
//                         }
//                         else
//                         {
//                          printf(" ");
//                         }
//                 }
//                 printf("\n");
//         }
//       return 0;
// }

//            ***************  (j)   REVERSE STAR PATTERN *********

// #include <stdio.h>
// #include <conio.h>
// void main()
// {
// int i, j, row;
//     printf("Enter the Row For the Pattern \n");
//     scanf("%d", &row);

//     for (i = row ; i >= 0; i--)
//     {

//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//     printf("\n");
//     }

//     getch();
// }

//  ********************  SERIES (1/!) + (2/2!) +  (3/3! ) ......... ************
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int main(){
//      float i,a, n,b,fact=1,sum=0;

//       printf("Enter The Value Of n :  \n");
//       scanf("%f",  &n);
//       for (  i = 1; i <=n; i++)
//       {
//           fact *= i;
//            a= i/fact;
//            printf("\n%f",a);
//            sum=sum+a;
//       }
//       printf(" \n  Your value is %f",sum);
//      return 0;
// }

//  ******************************      S=1+X+ X^2+ X^3------------+ X^N ******************
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int main(){
//      int i,a, n,b,x,sum=0;

//        printf("Enter The Value Of x :  \n");
//       scanf("%d",  &x);
//       printf("Enter The Value Of n :  \n");
//       scanf("%d",  &n);

//       printf("The Series is 1");

//       for (  i = 1; i <=n; i++)
//       {
//           a = pow(x,i);
//            sum=sum+a;
//            printf(",%d",a);
//       }  b= 1+sum;
//       printf(" \n\n  Solution of series is : %d",b);
//      return 0;
// }
