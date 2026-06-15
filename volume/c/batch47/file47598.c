// fichero 47598 -- macros y constantes -- MODIFICADO
#define LIMITE_47598 47798
#define FACTOR_47598 5

int aplicar_limite47598(int valor) {
    if (valor > LIMITE_47598) return LIMITE_47598;
    return valor * FACTOR_47598;
}
