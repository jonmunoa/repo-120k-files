// fichero 29318 -- macros y constantes
#define LIMITE_29318 29418
#define FACTOR_29318 4

int aplicar_limite29318(int valor) {
    if (valor > LIMITE_29318) return LIMITE_29318;
    return valor * FACTOR_29318;
}
