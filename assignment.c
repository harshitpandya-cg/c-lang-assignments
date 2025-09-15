// Q1.

// #include <stdio.h>
// int main(){
//     for(int n=1;n<=5;n++){
//         printf("*");
//     }
//     return 0;
// }

// Q2.

// #include <stdio.h>
// int main(){
//     for(int n=1;n<=5;n++){
//         printf("%d",n);
//     }
//     return 0;
// }

// Q3.

// #include <stdio.h>
// int main(){
//     for(int c=65;c<=69;c++){
//         printf("%c",c);
//     }
//     return 0;
// }

// Q4.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q5.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q6.

// #include <stdio.h>
// int main(){

//     for(int i=65;i<=68;i++){
//         for(int j=65;j<=68;j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q7.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q8.

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q9.

// #include <stdio.h>
// int main(){
//     for(int i=65;i<=69;i++){
//         for(int j=65;j<=i;j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q10.

// #include <stdio.h>
// int main() {
//     int n = 5;
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             if (j <= n - i)
//                 printf(" "); 
//             else
//                 printf("*");  
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q11.

// #include <stdio.h>
// int main() {
//     int n = 5; 
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         int num = 1;
//         for (j = 1; j <= n; j++) {
//             if (j <= n - i) {
//                 printf("  ");   
//             } else {
//                 printf("%d ", num++);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q12.

// #include <stdio.h>
// int main() {
//     int n = 5; 
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         char ch = 'A';   
//         for (j = 1; j <= n; j++) {
//             if (j <= n - i) {
//                 printf("  ");  
//             } else {
//                 printf("%c ", ch++);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q13.

// #include <stdio.h>
// int main() {
//     int n = 5; 
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q14.

// #include <stdio.h>
// int main() {
//     int n = 5; 
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         int num=1;
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("%d",num++);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q15.

// #include <stdio.h>
// int main() {
//     int n = 5; 
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         char c='A';
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("%c",c++);
//         }
//         printf("\n");
//     }
//     return 0;
// }