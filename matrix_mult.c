#include <stdio.h>
#define MAXROW      5
#define MAXCOL      5

int main() {
  int matrix1[MAXROW][MAXCOL],i,j,k,matrix2[MAXROW][MAXCOL],result[MAXROW][MAXCOL],sum,r,c,r1,c1,x;
  printf("enter the number of rows for first matrix=");
  scanf("%d",&r);
  printf("enter number of columns for first matrix=");
  scanf("%d",&c);
  for (i=0;i<r;i++){
      for(j=0;j<c;j++){
          printf("Enter element [%d,%d] : ",i+1,j+1);
          scanf("%d",&matrix1[i][j]);
      }
     printf("\n");
  }
  printf("the first matrix is");
  printf("\n--------------------------\n");
  for(i=0;i<r;i++){
      for(j=0;j<c;j++){
          
          printf("\t%d",matrix1[i][j]);
      }
    printf("\n");
  }
    printf("enter the number of rows for second matrix=");
    scanf("%d",&r1);
    printf("enter number of columns for second matrix=");
    scanf("%d",&c1);
    if(c!=r1){
        printf("product is not possible");
  }else{
  for (i=0;i<r1;i++){
      for(j=0;j<c1;j++){
          printf("\nEnter element [%d,%d] : ",i+1,j+1);
          scanf("%d",&matrix2[i][j]);
          
      }
    }
    printf("the second matrix is");
    printf("\n---------------------------------\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\t%d",matrix2[i][j]);
        }
    printf("\n");
    }
    
    
    
  for (i=0;i<r;i++){
      for(j=0;j<c1;j++){
          result[i][j]=0;
          
          for(k=0;k<r1;k++){
              
              result[i][j]=result[i][j]+matrix1[i][k]*matrix2[k][j];
              
          }
      }
      
   }
   printf("the product of the two matrices is");
   printf("\n-----------------------------------------\n");
   for(i=0;i<r;i++){
       for(j=0;j<c1;j++){
           printf("\t%d",result[i][j]);
       }
    printf("\n");
   }
  
    
    return 0;
  }
}