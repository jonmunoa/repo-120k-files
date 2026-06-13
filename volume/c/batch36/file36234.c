// fichero 36234 -- macros y constantes
#define LIMITE_36234 36334
#define FACTOR_36234 5

int aplicar_limite36234(int valor) {
    if (valor > LIMITE_36234) return LIMITE_36234;
    return valor * FACTOR_36234;
}
