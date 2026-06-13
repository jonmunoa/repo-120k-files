// fichero 14102 -- macros y constantes
#define LIMITE_14102 14202
#define FACTOR_14102 3

int aplicar_limite14102(int valor) {
    if (valor > LIMITE_14102) return LIMITE_14102;
    return valor * FACTOR_14102;
}
