// fichero 28598 -- macros y constantes -- MODIFICADO
#define LIMITE_28598 28798
#define FACTOR_28598 5

int aplicar_limite28598(int valor) {
    if (valor > LIMITE_28598) return LIMITE_28598;
    return valor * FACTOR_28598;
}
