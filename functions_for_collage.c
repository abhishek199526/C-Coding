// *****************************  VOID WITHOUT ARGUMENTS ***********
// #include <stdio.h>
// #include <conio.h>

// void sum();
// void sub();
// void mul();
// void div();
// void main()
// {
//      int a, b;
//      sum();

//      sub();

//      mul();

//      div();

//      getch();
// }
// void sum()
// {
//      int a, b, s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a + b;
//      printf("The Sum is %d", s);
//      getch();
// }
// void sub()
// {
//      int a, b, s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a - b;
//       printf("The Subtraction is %d", s);
//      getch();
// }
// void mul()
// {
//      int a, b, s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a * b;
//      printf("The Multification is %d", s);
//      getch();
// }
// void div()
// {
//      int a, b, s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a / b;
// printf("The Division is %d", s);
//      getch();
// }

// **************************         VOID WITH ARHUMENTS ************
// #include <stdio.h>
// #include <conio.h>

// void sum();
// void sub();
// void mul();
// void div();
// void main()
// {
//      int a,b;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//       sum(a, b);
//      sub(a, b);
//      mul(a, b);
//      div(a, b);
//      getch();
// }
// void sum(int i, int j)
// {
//      int s;
//      s = i + j;
//      printf("The Sum is %d\n", s);
//     getch();
// }
// void sub(int i, int j)
// {
//      int s;
//      s = i - j;
//      printf("The Subtraction  is %d\n", s);
//      getch();
// }
// void mul(int i, int j)
// {
//      int s;
//      s = i * j;
//      printf("The Multification  is %d\n", s);
//      getch();
// }
// void div(int i, int j)
// {
//      int s;

//          s = i / j;
//          printf("The Division  is %d\n", s);

//      getch();

// }

// ********************    RETURN TYPE WITHOUT ARGUMENTS **********************
// #include <stdio.h>
// #include <conio.h>

// int sum();
// int sub();
// int mul();
// int div();
// int main()
// {
//       int  c, d, e, f;
//      c = sum();
//      printf("\nThe sum of is %d\n", c);
//      d = sub();
//      printf("\nThe  Subtraction is %d\n", d);
//      e = mul();
//      printf("\nThe  Multification  is %d\n", e);
//      f = div();
//      printf("\nThe  THE DIVISON   is %d\n", f);
//      return 0;
// }
// int sum()
// {
//      int  a,b ,s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a + b;
//      return s;
// }
// int sub()
// {
//      int  a,b ,s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a - b;
//      return s;
// }
// int mul()
// {
//      int  a,b ,s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a * b;
//      return s;
// }
// int div()
// {int  a,b ,s;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      s = a / b;

//      return s;
// }

// ************************************** RETURN TYPE WITH ARGUMENTS *******************

// #include <stdio.h>
// #include <conio.h>

// int sum();
// int sub();
// int mul();
// int div();
// int main()
// {
//      int a, b, c, d, e, f;
//      printf("\nEnter 2 numbers\n");
//      scanf("%d%d", &a, &b);
//      c = sum(a, b);
//      printf("\nThe sum of is %d\n", c);
//      d = sub(a, b);
//      printf("\nThe  Subtraction is %d\n", d);
//      e = mul(a, b);
//      printf("\nThe  Multification  is %d\n", e);
//      f = div(a, b);
//      printf("\nThe  THE DIVISON   is %d\n", f);
//      return 0;
// }
// int sum(int i, int j)
// {
//      int s;
//      s = i + j;
//      return s;
// }
// int sub(int i, int j)
// {
//      int s;
//      s = i - j;
//      return s;
// }
// int mul(int i, int j)
// {
//      int s;
//      s = i * j;
//      return s;
// }
// int div(int i, int j)
// {
//      int s;

//          s = i / j;
//      return s;
// }

//         ************ DISPLAY FUCNTION WITH ARRAY ****
// #include<stdio.h>
// #include<conio.h>
// void display(int *m,int size);
// int main(){
//      int marks[]={20,40,50,100,110};

//           display(&marks[0],5);

//      return 0;
// }
// void display(int *m,int size){
//     int *marks;
//     for(int i=0; i<size; i++) {
//     printf("%d\n",*m);
//     *m++;
// }
// }
// ********************************       SUM OF 5 DIGIT NUMBER WTIHOUT RECURSION********
// #include<stdio.h>
// #include<conio.h>
// int sum(int num);
// int main(){
//      int num;
//      printf("Enter a 5 Digit Number\n");
//      scanf("%d", &num);
//      sum(num);
//      printf("The Sum of Numbers is %d", sum(num));
//      return 0;
// }
// int sum(int num){
//        int sum=0, rem=0;
//        if(num==0){
//            printf("%d", num);
//        }
//        while ( num!=0)
//        {
//            rem=num%10;
//            sum=sum+rem;
//            num=num/10;
//        }

//     return sum;
// }

// ***********************           SUM OF 5 DIGIT NO USING RECURSION ******
// #include<stdio.h>
// #include<conio.h>
// int sum(int num);
// int main(){
//      int num;
//      printf("Enter a 5 Digit Number\n");
//      scanf("%d", &num);
//      sum(num);
//      printf("The Sum of Numbers is %d", sum(num));
//      return 0;
// }
// int sum(int num){

//     if(num)
//         return( (num % 10) + sum(num / 10) );
//     else
//         return 0;
// }

// ***********************           SUM OF NATURAL NUMBERS USING RECURSION *****
// #include<stdio.h>
// #include<conio.h>
//  int sum(int a);
// int main(){
//      int a;
//      printf("Enter a Natural Number   \n");
//      scanf("%d", &a);
//      sum(a);
//      printf("The Sum of First  %d Natural Numbers  is %d", a,sum(a));
//      return 0;
// }
// int sum(int a){
//     int s=1;
//   if(a==1){
//       return 1;
//   }
//   else{
//       s=a+sum(a-1);
//   }
//   return s;
// }

//  *********************************        MULTIPLY OF NATURAL NUMBERS USING RECURSION ******
// #include<stdio.h>
// #include<conio.h>
//  int mul(int a);
// int main(){
//      int a;
//      printf("Enter a Natural Number   \n");
//      scanf("%d", &a);
//      mul(a);
//      printf("The Multification  of First  %d natural Numbers  is %d", a,mul(a));
//      return 0;
// }
// int mul(int a){
//     int m=1;
//   if(a==1){
//       return 1;
//   }
//   else{
//       m=a*mul(a-1);
//   }
//   return m;
// }

// *************     FACTORIAL USING RECURSION *************
// #include<stdio.h>
// #include<conio.h>
//  int fac(int a);
// int main(){
//      int a;
//      printf("Enter a Number \n");
//      scanf("%d", &a);
//      fac(a);
//      printf("The Factorial of %d is %d", a,fac(a));
//      return 0;
// }
// int fac(int a){
//     int fact=1;
//   if(a==1){
//       return 1;
//   }
//   else{
//       fact=a*fac(a-1);
//   }
//   return fact;
// }
