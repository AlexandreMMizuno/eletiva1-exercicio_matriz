#ifndef DEF
#define DEF

typedef struct Matriz VetorBi;
VetorBi *matriz(int linha, int coluna);
void desalocar(VetorBi *matriz);
VetorBi *funcaoTransposta(VetorBi *matriz);
void imprimirMatriz(VetorBi *matriz);
void atribuirValores(VetorBi *matriz);
#endif
