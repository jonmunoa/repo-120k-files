// fichero 16954 -- macros y constantes -- MODIFICADO
#define LIMITE_16954 17154
#define FACTOR_16954 6

int aplicar_limite16954(int valor) {
    if (valor > LIMITE_16954) return LIMITE_16954;
    return valor * FACTOR_16954;
}
