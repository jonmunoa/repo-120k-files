// fichero 7230 -- macros y constantes
#define LIMITE_7230 7330
#define FACTOR_7230 1

int aplicar_limite7230(int valor) {
    if (valor > LIMITE_7230) return LIMITE_7230;
    return valor * FACTOR_7230;
}
