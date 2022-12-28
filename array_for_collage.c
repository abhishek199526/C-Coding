//*****************************************      INPUT ARRAY ******************

// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int ss[20], num,size,i;
//     printf("Enter the size of The Array \n");
//     scanf("%d",&size);
//     printf("Enter the Numbers\n");
//     for ( i = 0; i < size; i++)
//     {
//       scanf("%d", &ss[i]);
//     }
//      for ( i = 0; i < size; i++){
//        printf(" The Numbers Are : %d\n", ss[i]);
//      }
//     return 0;
// }

// ***************************************    SUM,ODD, ODD SUM, EVEN, EVEN SUM *********************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//    int ss[20], num, size, sum = 0, i, oddsum = 0, evensum = 0;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ss[i]);
//    }
//    for (i = 0; i < size; i++)
//    {
//       sum = sum + ss[i];
//       if (ss[i] % 2 == 0)
//       {
//          // printf(" The Even Number in this Array is %d\n", ss[i]);
//          evensum = evensum + ss[i];
//       }
//       else
//       {
//          // printf(" The Odd  Number in this Array is %d\n", ss[i]);
//          oddsum = oddsum + ss[i];
//       }
//    }
//    printf(" \nThe Sum of  Even Numbers in  Array  is : %d\n", evensum);
//    printf(" \nThe Sum of  Odd Numbers in Array   is  : %d\n", oddsum);
//    printf(" \n                 The Sum of Array   is : %d\n", sum);

//    return 0;
// }

//  **************************** ******************  MAX,MIN**************************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//      int ss[20], num,i,size, max,min;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ss[i]);
//    }
//    max=ss[0];
//    min=ss[0];
//     for (i = 0; i < size; i++){
// if (ss[i]>max)
//   max=ss[i];
// if (ss[i]<min)
// min=ss[i];
//     }
// printf("Largest and Smallest number in the array is : %d &  %d \n ", max,min);

//     return 0;
// }

// **************************************   POSTION OF A NUMBER IN AN ARRAY***************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//    int ss[20], number, i, size, posi ;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ss[i]);
//    }
//    printf(" The Numbers Are: ");
//    for (i = 0; i < size; i++)
//       printf("%d   ", ss[i]);
//         printf("\n");
//    printf("  Enter the Number to Serch in the Array ");
//    scanf("%d", &number);

//    for (i = 0; i < size; i++)
//    {
//       if (number == ss[i])
//       {
//          posi = ss[i];
//           break;
//       }

//    }
//    if(number== ss[i])
//          printf("Number found in %dth Position\n", posi );
//          else
//          {
//             printf("Number Not Found \n Try Again ");
//          }

//    return 0;
//  }

//   ****************************************  POSITIVE,NEGATIVE, ZERO ************************
// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int ss[20], number, i, size, posi, zcount=0, pcount=0 , ncount=0;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ss[i]);
//    }
// for (i = 0; i < size; i++)
//    {
//      if(ss[i] ==  0){
// zcount= zcount+1;
// }

// else if ( ss[i]  >  0){
// pcount=pcount+1;
// }
// else
// {
//    ncount=ncount+1;
// }

//    }
//    printf("There are %d   Zero in the Array \n", zcount);
//    printf("There are %d   Positive numbers  in the Array \n", pcount);
//    printf("There are %d   Negative numbers  in the Array \n", ncount);
//     return 0;
// }

// **************************   SUM OF ARRAY *********************************
// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//    int i,j , arr[3][3] ,arr1[3][3] ,sum[3][3] ;

//    printf("Enter the Elements of the  First Array ");
//    for (i = 0; i < 3; i++)
//    { for (j = 0; j < 3; j++)
//    {
//       scanf("%d", &arr[i][j]);
//       }
//    } printf(" The Elements of the First  Array is :: \n");
//    for (i = 0; i < 3; i++)
//    { for (j = 0; j < 3; j++)
//    {
//       printf("%d", arr[i][j]);
//       }
//       printf("\n");
//    }
//    printf("Enter the Elements of the  Second  Array ");
//    for (i = 0; i < 3; i++)
//    { for (j = 0; j < 3; j++)
//    {
//       scanf("%d", &arr1[i][j]);
//       }
//    } printf(" The Elements of the Second  Array is :: \n");
//    for (i = 0; i < 3; i++)
//    { for (j = 0; j < 3; j++)
//    {
//       printf("%d", arr1[i][j]);
//       }
//       printf("\n");
//    }

//     printf(" The  Sum  of First And  Second  Array is :: \n");
//    for (i = 0; i < 3; i++)
//    { for (j = 0; j < 3; j++)
//    {
//        sum[i][j] = arr[i][j] + arr1[i][j] ;
//        printf("%d", sum[i][j]);
//     //   printf("  %d+%d=%d   ",arr[i][j] , arr1[i][j],sum[i][j]);
//       }
//       printf("\n");
//    }
//     return 0;
// }
// ********************************           MULTIFICATION PF ARRAY *************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {

//    int i, j, k, arr1[3][3], arr2[3][3], mul[3][3], sum;

//    printf("Enter the Elements of the  First Array ");
//    for (i = 0; i < 3; i++)
//    {
//       for (j = 0; j < 3; j++)
//       {
//          scanf("%d", &arr1[i][j]);
//       }
//    }
//    printf("Enter the Elements of the  Second  Array ");
//    for (i = 0; i < 3; i++)
//    {
//       for (j = 0; j < 3; j++)
//       {
//          scanf("%d", &arr2[i][j]);
//       }
//    }

//    for (i = 0; i < 3; i++)
//    {

//       for (j = 0; j < 3; j++)
//       {
//          sum = 0;
//          for (k = 0; k < 3; k++)
//          {

//             sum = sum + arr1[i][k] * arr2[k][j];
//             mul[i][j] = sum;
//          }
//       }
//    }
//    printf(" The Elements of the First  Array is :: \n");
//    for (i = 0; i < 3; i++)
//    {
//       for (j = 0; j < 3; j++)
//       {
//          printf("%d", arr1[i][j]);
//       }
//       printf("\n");
//    }
//    printf(" The Elements of the Second  Array is :: \n");
//    for (i = 0; i < 3; i++)
//    {
//       for (j = 0; j < 3; j++)
//       {
//          printf("%d", arr2[i][j]);
//       }
//       printf("\n");
//    }
//    printf(" The  MULTIFICATION   of First And  Second  Array is :: \n");

//    for (i = 0; i < 3; i++)
//    {

//       for (j = 0; j < 3; j++)
//       {
//          printf(" %d  ", mul[i][j]);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// **************************    COPY OF ARRAY *********************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//    int arr[2][2], arr1[2][2], i, j;
//    printf("Enter the Elements of  Array ");
//    for (i = 0; i < 2; i++)
//    {
//       for (j = 0; j < 2; j++)
//       {
//          scanf("%d", &arr[i][j]);
//       }
//    }
//    printf("The Copied Array is :\n");
//    for (i = 0; i < 2; i++)

//    {
//       for (j = 0; j < 2; j++)
//       {
//          arr1[i][j] = arr[i][j];
//    printf(" %d", arr1[i][j]);
//       }
//       printf("\n");
//    }
//    return 0;
// }
//  *****************************************      SUM OF FIRST AND LAST INDEEX *********
// #include <stdio.h>
// #include<conio.h>

//     int main()
//     {
//         int ss[20],  size, asum[1], i,num;
//         printf("Enter the size of The Array \n");
//         scanf("%d", &size);
//         num=size-1;
//         printf("Enter the Numbers\n");
//         for (i = 0; i < size; i++)
//         {
//             scanf("%d", &ss[i]);
//         }
//         for (i = 0; i < size; i++)
//         {
//             asum[1] = ss[0] +ss[num];
//         }
//             printf("\n \n  The sum of First and Last index is  %d", asum[1]);

//     return 0;
// }

// ***************************       TOATAL AND AVERAGE ***********************

// #include<stdio.h>
// #include<conio.h>

// int main(){
//      float ss[20],  size, num,total=0;
//      float aver;
//      int i;
//         printf("Enter the size of The Array \n");
//         scanf("%f", &size);
//         num=size-1;
//         printf("Enter the Numbers\n");
//         for (i = 0; i < size; i++)
//         {
//             scanf("%f", &ss[i]);
//         }
//  for (i = 0; i < size; i++)
//         {
//             total+=ss[i];
//         }
// aver=total/size;
// printf("\n\n The Total of All Array Elements is : %.2f", total);
// printf("\n\n The Average of All Array Elements is : %.2f", aver);
//      return 0;
// }

//  ******************************      ARRAY IN REVERSE ORDER ****************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//     int ss[20], size, i, num;
//     printf("Enter the size of The Array \n");
//     scanf("%d", &size);

//     printf("Enter the Numbers\n");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &ss[i]);
//     }
//     printf("\n \n The Elements in Reverse Orser is :\n");

// for (i = size-1; i >= 0; i--)
// {
//     printf("%d\n", ss[i]);
// }

//     return 0;
// }
//  *******    ARRAY  (BUBBLE)SORTING  IN ASCENDING ORDER / DESCENDING ORDER  ********************************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {

//    int ts[20], size, i, j, temp;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ts[i]);
//    }

//    for (i = 0; i < size - 1; i++)
//    {
//       for (j = 0; j < size - 1; j++)
//       {
//          if (ts[j] > ts[j + 1])
//          // if (ts[j] < ts[j + 1])
//          {
//             temp = ts[j];
//             ts[j] = ts[j + 1];
//             ts[j + 1] = temp;
//          }
//       }
//    }
//    printf("  \n The Numbers in  Ascending Order is -\n");
//    // printf("  \n The Numbers in  Descending Order is -\n");
//    for (i = 0; i < size; i++)
//    {
//       printf("%d\n", ts[i]);
//    }
//    return 0;
// }

// *********************  ARRAY  (SELECTION )SORTING  IN ASCENDING ORDER / DESCENDING ORDER *****************
// #include <stdio.h>
// #include<conio.h>

// int main()
// {

//    int ts[20], size, i, j, temp;
//    printf("Enter the size of The Array \n");
//    scanf("%d", &size);
//    printf("Enter the Numbers\n");
//    for (i = 0; i < size; i++)
//    {
//       scanf("%d", &ts[i]);
//    }

//    for (i = 0; i < size - 1; i++)
//    {
//       for (j = i+1; j < size ; j++)
//       {
//          if (ts[i] > ts[j])
//          // if (ts[i] < ts[j])
//          {
//             temp = ts[i];
//             ts[i] = ts[j];
//             ts[j] = temp;
//          }
//       }
//    }
//    printf("  \n The Numbers in  Ascending Order is -\n");
//    // printf("  \n The Numbers in  Descending Order is -\n");
//    for (i = 0; i < size; i++)
//    {
//       printf("%d\n", ts[i]);
//    }
//    return 0;
// }