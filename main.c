#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
    VetorBi *m= matriz(3,3); 
    
    int i,j; 
    
    atribuirValores(m);
    
    VetorBi *mTrans = funcaoTransposta(m); 
    
    printf("Matriz\n");
    imprimirMatriz(m);
    printf("\n\nMatriz Transposta\n");
    imprimirMatriz(mTrans);
    desalocar(m); 
    desalocar(mTrans);  
    system("pause");
    return 0; 
}
