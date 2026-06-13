// fichero 32954 -- macros y constantes
#define LIMITE_32954 33054
#define FACTOR_32954 5

int aplicar_limite32954(int valor) {
    if (valor > LIMITE_32954) return LIMITE_32954;
    return valor * FACTOR_32954;
}
