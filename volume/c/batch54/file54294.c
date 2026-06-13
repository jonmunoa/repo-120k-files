// fichero 54294 -- macros y constantes
#define LIMITE_54294 54394
#define FACTOR_54294 5

int aplicar_limite54294(int valor) {
    if (valor > LIMITE_54294) return LIMITE_54294;
    return valor * FACTOR_54294;
}
