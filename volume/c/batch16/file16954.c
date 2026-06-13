// fichero 16954 -- macros y constantes
#define LIMITE_16954 17054
#define FACTOR_16954 5

int aplicar_limite16954(int valor) {
    if (valor > LIMITE_16954) return LIMITE_16954;
    return valor * FACTOR_16954;
}
