#include <stdio.h>


void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  //swap
  int r1 = 1, r2 = 2;
  for(int i=0;i<3;i++){
    swap(&arr[r1][i],&arr[r2][i]);
  }

  // printing
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}