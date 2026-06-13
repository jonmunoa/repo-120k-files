// fichero 36954 -- macros y constantes
#define LIMITE_36954 37054
#define FACTOR_36954 5

int aplicar_limite36954(int valor) {
    if (valor > LIMITE_36954) return LIMITE_36954;
    return valor * FACTOR_36954;
}
