// 11111
// 11111
// 11111
// 11111
// 11111

#include<stdio.h>
int main(){
int n,col,row;
scanf("%d",&n);
for(row=0;row<n;row++,printf("\n")){
for(col=0;col<n;col++)
//          printf("1");
//      }
//  }

// 11111
// 22222
// 33333
// 44444
// 55555

//  #include<stdio.h>
//  int main(){
//      int n,col,row;
//      scanf("%d",&n);
//      for(row=0;row<n;row++,printf("\n")){
//          for(col=0;col<n;col++)
//          printf("%d",row+1);
//      }
//  }



// 12345
// 12345
// 12345
// 12345
// 12345

// #include<stdio.h>
// int main(){
//     int n,r,c;
//     scanf("%d",&n);
//     for (r=0;r<n;r++,printf("\n")){
//         for(c=0;c<n;c++)
//         printf("%d",c+1);
//     }
// }

// 1
// 12
// 123
// 1234
// 12345

// #include<stdio.h>
// int main(){
//     int n,r,c;
//     scanf("%d",&n);
//     for (r=0;r<n;r++,printf("\n")){
//         for(c=0;c<=r;c++)
//         printf("%d",c+1);
//     }
// }

// 12345
// 1234
// 123
// 12
// 1

// #include<stdio.h>
// int main(){
//     int n,r,c;
//     scanf("%d",&n);
//     for (r=0;r<n;r++,printf("\n")){
//         for(c=0;c<n-r;c++)
//         printf("%d",c+1);
//     }
// }

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

// #include<stdio.h>
// int main(){
//     int n,r,c;
//     scanf("%d",&n);
//     for (r=0;r<n;r++,printf("\n")){
//         for(c=0;c<n-r;c++)
//         printf("%d ",n-c);
//     }
// }

//  1 
//  2 3 
//  4 5 6 
//  7 8 9 10 
// 11 12 13 14 15 

// #include<stdio.h>
// int main(){
//     int n,r,c,ex=1;
//     scanf("%d",&n);
//     for (r=0;r<n;r++,printf("\n")){
//         for(c=0;c<=r;c++)
//         printf("%d ",ex++);
//     }
// }

// 01 02 03 04 05 
// 06 07 08 09 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
 

//  #include<stdio.h>
//  int main(){
//      int n,r,c,ex=1;
//      scanf("%d",&n);
//      for (r=0;r<n;r++,printf("\n")){
//          for(c=0;c<n;c++)
//          printf("%02d ",ex++);
//      }
//  }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

1 #include<stdio.h>
1 int main(){
1     int n,r,c;
1     scanf("%d",&n);
1     for (r=0;r<n;r++,printf("\n")){
1         for(c=0;c<=r;c++)
1         printf("%d ",r+1);
1     }
1 }
