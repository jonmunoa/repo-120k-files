// fichero 8294 -- macros y constantes
#define LIMITE_8294 8394
#define FACTOR_8294 5

int aplicar_limite8294(int valor) {
    if (valor > LIMITE_8294) return LIMITE_8294;
    return valor * FACTOR_8294;
}
