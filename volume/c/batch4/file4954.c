// fichero 4954 -- macros y constantes
#define LIMITE_4954 5054
#define FACTOR_4954 5

int aplicar_limite4954(int valor) {
    if (valor > LIMITE_4954) return LIMITE_4954;
    return valor * FACTOR_4954;
}
