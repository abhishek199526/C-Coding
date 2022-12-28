//    *************************************    VOWEL AND CONSONANT *************************

/*#include<stdio.h>
// #include<conio.h>

int main(){
     char c;
     printf("Enter Any Alphabet\n");
     scanf("%c", &c);
     switch(c){
        case 'a' :
        printf("VOWEL");
        break;
        case 'e' :
        printf("VOWEL");
        break;

case 'i' :
        printf("VOWEL");
        break;

case 'o' :
        printf("VOWEL");
        break;
case 'u' :
        printf("VOWEL");
        break;
        case 'A' :
        printf("VOWEL");
        break;
        case 'E' :
        printf("VOWEL");
        break;
        case 'I' :
        printf("VOWEL");
        break;
        case 'O' :
        printf("VOWEL");
        break;
        case 'U' :
        printf("VOWEL");
        break;
        default :
        printf("consonant");

     }
     
     return 0;
}*/

//   ***********************              DAY                ********************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//      int day;
//      printf("Enter Any Number Between 0 To 6\n");
//      scanf("%d", &day);
//      switch (day)
//      {
//      case 0:
//           printf("Today is Sunday\n");
//           break;
//      case 1:
//           printf("Today is Monday\n");
//           break;
//      case 2:
//           printf("Today is  Tuesday\n");
//           break;
//      case 3:
//           printf("Today is Wednesday\n");
//           break;
//      case 4:
//           printf("Today is Thursday\n");
//           break;
//      case 5:
//           printf("Today is Friday\n");
//           break;
//      case 6:
//           printf("Today is Saturday\n");
//           break;
//      }
//      return 0;
// }
// **************************        MONTH ****************
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//         int month;
//         printf("Enter Any Number Between 1 To 12\n");
//         scanf("%d", &month);
//         switch (month)
//         {

//         case 1:
//                 printf("JANUARY\n");
//                 break;
//         case 2:
//                 printf("FEBUARY\n");
//                 break;
//         case 3:
//                 printf("MARCH\n");
//                 break;
//         case 4:
//                 printf("APRAIL\n");
//                 break;
//         case 5:
//                 printf("MAY\n");
//                 break;
//         case 6:
//                 printf("JUNE\n");
//                 break;
//         case 7:
//                 printf("JULY\n");
//                 break;
//         case 8:
//                 printf("AUGUST\n");
//                 break;
//         case 9:
//                 printf("SEPTEMBER\n");
//                 break;
//         case 10:
//                 printf("OCTOBAR\n");
//                 break;
//         case 11:
//                 printf("NOVEMBER\n");
//                 break;
//         case 12:
//                 printf("DECEMBER\n");
//                 break;
//         }
//         return 0;
// }
// **************************************   OPERATOR*************************************

// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//      char op;
//      int n1, n2;
//      printf("Enter the first number\n");
//      scanf(" %d", &n1);
//      printf("Enter the Opeartor\n ");
//      scanf(" %c", &op);
//      printf("Enter the Second number\n");
//      scanf(" %d", &n2);
//      switch (op)
//      {
//      case '+':
//           printf(" %d + %d =%d ", n1, n2, n1 + n2);
//           break;

//      case '-':
//           printf("  %d - %d =%d  ", n1, n2, n1 - n2);
//           break;
//      case '*':
//           printf(" %d * %d =%d  ", n1, n2, n1 * n2);
//           break;

//      case '/':
//           printf(" %d / %d =%d  ", n1, n2, n1 / n2);
//           break;

//      case '%':
//           printf(" %d % %d =%d ", n1, n2, n1 % n2);
//           break;
//      default:
//           printf("Please Enter Valid Oerator");
//      }

//      return 0;
// }

// *********************************************** PRIME NUMBER **************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//        int  num , i;
//       printf("Enter the number\n");
//         scanf("%d", &num);
//        i=2;
//        while (i<=num-1)
//        {
//            if (num%i==0)
//            {
//               printf("Not a prime number");
//               break;
//            }
//            i++;
//        }
//        if (i==num)
//        {
//             printf("Prime Number");
//        }

//       return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// int main(){
//        int fac=1, ch ,no;
//        printf("Please selcet at least one choice from given below\n\n  Enter 1 to get factriol of a number \n\nEnter 2 to know whether no. is Prime or Not \n\n  Enter 3to know whether no. is Odd or Even \n\n   Enter 4 to exit the program \n\n");
//        scanf("%d", &ch);

//        switch (ch)
//        {
//        case '1':  printf("Enter the Number to get Factorial:");
//                   scanf("%d", &no);
//                   printf("You Entered %d \n  ", no);
//  for( int i=1; i<=no;i++)
//  fac=fac*i;
//  printf(" The factorial of %d is: %d\n", no,fac);

//              break;

//        default:
//              break;
//        }
//        return 0;
// }
#include <stdio.h>

void main()
{
   int i, sum=0;
   printf("Numbers between 250 and 400 , divisible by 8 : \n");
   for(i=251;i<400;i++)
   {
     if(i%8==0)
     {
       printf("% d\n",i);
       sum+=i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
}