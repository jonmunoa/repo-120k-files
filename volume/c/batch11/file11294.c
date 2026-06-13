// fichero 11294 -- macros y constantes
#define LIMITE_11294 11394
#define FACTOR_11294 5

int aplicar_limite11294(int valor) {
    if (valor > LIMITE_11294) return LIMITE_11294;
    return valor * FACTOR_11294;
}
