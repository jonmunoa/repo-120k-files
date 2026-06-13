// fichero 50294 -- macros y constantes
#define LIMITE_50294 50394
#define FACTOR_50294 5

int aplicar_limite50294(int valor) {
    if (valor > LIMITE_50294) return LIMITE_50294;
    return valor * FACTOR_50294;
}
