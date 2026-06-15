// fichero 14598 -- macros y constantes -- MODIFICADO
#define LIMITE_14598 14798
#define FACTOR_14598 5

int aplicar_limite14598(int valor) {
    if (valor > LIMITE_14598) return LIMITE_14598;
    return valor * FACTOR_14598;
}
