// fichero 20942 -- macros y constantes -- MODIFICADO
#define LIMITE_20942 21142
#define FACTOR_20942 4

int aplicar_limite20942(int valor) {
    if (valor > LIMITE_20942) return LIMITE_20942;
    return valor * FACTOR_20942;
}
