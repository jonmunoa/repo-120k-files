// fichero 8598 -- macros y constantes -- MODIFICADO
#define LIMITE_8598 8798
#define FACTOR_8598 5

int aplicar_limite8598(int valor) {
    if (valor > LIMITE_8598) return LIMITE_8598;
    return valor * FACTOR_8598;
}
