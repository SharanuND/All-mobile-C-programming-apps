// 1
// #include<stdio.h>
// void main(){
//     printf("Hello, World!!!");

// }

// 2
// #include<stdio.h>
// void main(){
//     for(int i=1;i<=100;i++){
//         printf("%d\t",i);
//     }
// }

//3
// #include<stdio.h>
// void main(){
//     for(char i='a';i<='z';i++){
//         printf("%c ",i);
//     }
// }


// 4
// #include<stdio.h>
// void main(){
//     for(char i='A';i<='Z';i++){
//         printf("%c ",i);

//     }
// }

// 5
// #include<stdio.h>
// void main(){
//     int n;printf("Enter the number : ");scanf("%d",&n);

//     if(n%2==0){
//         printf("\nThe number is even");
//     }
//     else
//     printf("\nThe number is ODD\n");
// }

// 6
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the value of n : ");scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//         else{
//             continue;
//         }
//     }
// }


// 7
// #include<stdio.h>
// void main(){
//     int a,b;
//     printf("Enter the value of the following\nA : ");
//     scanf("%d",&a);printf("B : ");scanf("%d",&b);
//     printf("\nThe data before swapping\nA : %d\nB : %d",a,b);
//     int c=a;
//     a=b;
//     b=c;
//     printf("\nThe data After swapping\nA : %d\nB : %d",a,b);
// }


// 8
// #include<stdio.h>
// void main(){
//     printf("Enter the values of the following\n");
//     int a,b;
//     printf("A : ");scanf("%d",&a);
//     printf("B : ");scanf("%d",&b);
//     printf("The data before swapping\nA : %d\nB : %d",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\nThe data After swapping\nA : %d\nB : %d",a,b);
// }

// 9
// #include<stdio.h>
// void main(){
//     int year;
//     printf("Enter the year : ");scanf("%d",&year);
//     if(year%4==0){
//         if(year%100==0){
//             if(year%400==0){
//                 printf("Leap year");
//             }
//             else{
//                 printf("Not-Leap year");
//             }
//         }
//         else{
//             printf("Leap year");
//         }
//     }
//     else{
//         printf("Not-Leap year");
//     }
// }