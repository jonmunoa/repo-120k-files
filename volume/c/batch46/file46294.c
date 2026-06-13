// fichero 46294 -- macros y constantes
#define LIMITE_46294 46394
#define FACTOR_46294 5

int aplicar_limite46294(int valor) {
    if (valor > LIMITE_46294) return LIMITE_46294;
    return valor * FACTOR_46294;
}
