// fichero 7026 -- macros y constantes
#define LIMITE_7026 7126
#define FACTOR_7026 2

int aplicar_limite7026(int valor) {
    if (valor > LIMITE_7026) return LIMITE_7026;
    return valor * FACTOR_7026;
}
