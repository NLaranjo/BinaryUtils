#include<stdio.h>
#include<string.h>
#define SIZE_IN_BYTE sizeof(int)

/**
 *prints x in binary 
 * @parm x whats suposed to be printed
 */
void printB(int x)
{
  int tam= SIZE_IN_BYTE*8;
  while(tam)
  {
    if(x&1){ printf("1"); }
    else   { printf("0"); }
    x>>=1;
    tam--;
  }  
}
/**
 *rotates a value in binary
 * @parm x whats suposed to be rotated
 * @parm pos number of positions for rotating x
 * @parm dir direction to rotate
 */
void shiftrotate(int* x, int pos, char dir){
  int aux=*x, value=*x; 
  int j=SIZE_IN_BYTE*8;
  switch(toupper(dir)){
    case 'L':
      //shift left
      value<<=pos;
      aux>>=j-pos;
      value|=aux;
      break;
    case 'R':
      //shift right
      value>>=pos;
      aux<<=j-pos;
      value|=aux;
      break;
    default:
      perror("direction not valid use 'r' for right; and 'l' for left ");
      break;
  }
  *x=value;
}
/*
void xorer(int *x, int *y, int* result ){
  int write=*result, value1=*x,value2=*y;
  int i=0;
  for(i=0;i<=SIZE_IN_BYTE*8)
  
  
  
  
  
}
*/

int main(){
  int x=45;
  
  printB(x);
  printf("\n");
  shiftrotate(&x,2,'r');
  printB(x);
  printf("\n");
  printf("\n");
  printB(15);
  printB(8520);
}