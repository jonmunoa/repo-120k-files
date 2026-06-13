// fichero 5954 -- macros y constantes
#define LIMITE_5954 6054
#define FACTOR_5954 5

int aplicar_limite5954(int valor) {
    if (valor > LIMITE_5954) return LIMITE_5954;
    return valor * FACTOR_5954;
}
