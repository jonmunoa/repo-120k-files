// fichero 13294 -- macros y constantes
#define LIMITE_13294 13394
#define FACTOR_13294 5

int aplicar_limite13294(int valor) {
    if (valor > LIMITE_13294) return LIMITE_13294;
    return valor * FACTOR_13294;
}
