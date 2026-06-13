// fichero 38954 -- macros y constantes
#define LIMITE_38954 39054
#define FACTOR_38954 5

int aplicar_limite38954(int valor) {
    if (valor > LIMITE_38954) return LIMITE_38954;
    return valor * FACTOR_38954;
}
