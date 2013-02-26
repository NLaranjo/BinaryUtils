#include<stdio.h>
#define SIZE_IN_BYTE sizeof(int)

/**
 *prints x in binary 
 * @parm x whats suposed to be printed
 *	 size number of bytes in x
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


void shiftrotate(int *x, int pos, char dir){
  int aux=*x,  j=SIZE_IN_BYTE*8, value=*x;
  if(x=='l'||x=='L')
  { //shift left
    value<<=pos;
    aux>>=j-pos;
    value|=aux;    
  }
  if(x=='r'||x=='R')
  {//shift right
    value>>=pos;
    aux<<=j-pos;
    value|=aux;
  }
  else{perror("direction not valid use 'r' for right; and 'l' for left ")}
  *x=value;
}




int main(){
  int x=45;
  
  printB(x);
  printf("\n");
  shiftrotate(&x,2,'l');
  printB(x);
  printf("\n");
  printf("\n");
  printB(15);
  printB(8520);
}