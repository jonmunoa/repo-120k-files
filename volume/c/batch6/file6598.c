// fichero 6598 -- macros y constantes -- MODIFICADO
#define LIMITE_6598 6798
#define FACTOR_6598 5

int aplicar_limite6598(int valor) {
    if (valor > LIMITE_6598) return LIMITE_6598;
    return valor * FACTOR_6598;
}
