// fichero 14102 -- macros y constantes -- MODIFICADO
#define LIMITE_14102 14302
#define FACTOR_14102 4

int aplicar_limite14102(int valor) {
    if (valor > LIMITE_14102) return LIMITE_14102;
    return valor * FACTOR_14102;
}
