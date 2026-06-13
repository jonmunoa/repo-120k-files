// fichero 8954 -- macros y constantes
#define LIMITE_8954 9054
#define FACTOR_8954 5

int aplicar_limite8954(int valor) {
    if (valor > LIMITE_8954) return LIMITE_8954;
    return valor * FACTOR_8954;
}
