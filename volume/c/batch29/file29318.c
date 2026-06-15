// fichero 29318 -- macros y constantes -- MODIFICADO
#define LIMITE_29318 29518
#define FACTOR_29318 5

int aplicar_limite29318(int valor) {
    if (valor > LIMITE_29318) return LIMITE_29318;
    return valor * FACTOR_29318;
}
