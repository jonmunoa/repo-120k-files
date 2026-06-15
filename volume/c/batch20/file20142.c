// fichero 20142 -- macros y constantes -- MODIFICADO
#define LIMITE_20142 20342
#define FACTOR_20142 4

int aplicar_limite20142(int valor) {
    if (valor > LIMITE_20142) return LIMITE_20142;
    return valor * FACTOR_20142;
}
