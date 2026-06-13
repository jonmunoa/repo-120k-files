// fichero 13954 -- macros y constantes
#define LIMITE_13954 14054
#define FACTOR_13954 5

int aplicar_limite13954(int valor) {
    if (valor > LIMITE_13954) return LIMITE_13954;
    return valor * FACTOR_13954;
}
