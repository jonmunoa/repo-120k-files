// fichero 17598 -- macros y constantes -- MODIFICADO
#define LIMITE_17598 17798
#define FACTOR_17598 5

int aplicar_limite17598(int valor) {
    if (valor > LIMITE_17598) return LIMITE_17598;
    return valor * FACTOR_17598;
}
