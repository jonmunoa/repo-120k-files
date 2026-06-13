// fichero 16294 -- macros y constantes
#define LIMITE_16294 16394
#define FACTOR_16294 5

int aplicar_limite16294(int valor) {
    if (valor > LIMITE_16294) return LIMITE_16294;
    return valor * FACTOR_16294;
}
