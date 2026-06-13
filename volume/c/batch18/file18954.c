// fichero 18954 -- macros y constantes
#define LIMITE_18954 19054
#define FACTOR_18954 5

int aplicar_limite18954(int valor) {
    if (valor > LIMITE_18954) return LIMITE_18954;
    return valor * FACTOR_18954;
}
