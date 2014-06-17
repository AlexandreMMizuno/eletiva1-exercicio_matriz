#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

typedef struct Matriz
{
    int linha;
    int coluna;
    int **matriz;
}VetorBi;

VetorBi *matriz(int linha, int coluna ){
    
   int j=0;
    
   VetorBi *matriz = malloc( sizeof(VetorBi));

   matriz->linha = linha;
   matriz->coluna = coluna;
        
   matriz->matriz = malloc( sizeof(int) * matriz->coluna );
             
   for ( j = 0; j < matriz->linha; j++ )
   {    
      matriz->matriz[j] = malloc( sizeof(int) * matriz->linha );              
   }
   
   return matriz;
}

void desalocar(VetorBi *matriz){
     int c, x;
     
     for(x=0; x<matriz->coluna; x++ )
         free(matriz->matriz[x]);
     
     free(matriz->matriz);
     free(matriz);
     
}

VetorBi *funcaoTransposta(VetorBi *mat){
    int n,m, aux;
    
    VetorBi *mTrans = matriz(mat->coluna, mat->linha );
    
    for( n = 0; n < mTrans->linha; n++ )
       {                   
          for( m = 0; m < mTrans->coluna; m++ )
          {             
             mTrans->matriz[n][m] = mat->matriz[m][n];
          }
    } 
    
    return  mTrans;
}

void atribuirValores(VetorBi *matriz){
   int i,j; 
    
   for ( i = 0; i < matriz->linha; i++ )
       {                   
          for ( j = 0; j < matriz->coluna; j++ )
          {   
            printf("posicao[%d][%d] = ",i,j);
            scanf("%d", &matriz->matriz[i][j] );                        
          }
    } 
}

void imprimirMatriz(VetorBi *matriz){
   int i,j; 
    
   for ( i = 0; i < matriz->linha; i++ )
       {                   
          for ( j = 0; j < matriz->coluna; j++ )
          {   
            printf("%d ",matriz->matriz[i][j]);              
            
          }
          printf("\n");
    }    
}
