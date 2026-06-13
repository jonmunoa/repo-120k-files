// fichero 12294 -- macros y constantes
#define LIMITE_12294 12394
#define FACTOR_12294 5

int aplicar_limite12294(int valor) {
    if (valor > LIMITE_12294) return LIMITE_12294;
    return valor * FACTOR_12294;
}
