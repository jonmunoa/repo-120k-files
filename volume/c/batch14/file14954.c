// fichero 14954 -- macros y constantes
#define LIMITE_14954 15054
#define FACTOR_14954 5

int aplicar_limite14954(int valor) {
    if (valor > LIMITE_14954) return LIMITE_14954;
    return valor * FACTOR_14954;
}
