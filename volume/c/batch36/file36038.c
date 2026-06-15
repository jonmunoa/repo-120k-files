// fichero 36038 -- macros y constantes -- MODIFICADO
#define LIMITE_36038 36238
#define FACTOR_36038 5

int aplicar_limite36038(int valor) {
    if (valor > LIMITE_36038) return LIMITE_36038;
    return valor * FACTOR_36038;
}
