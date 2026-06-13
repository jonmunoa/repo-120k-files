// fichero 36038 -- macros y constantes
#define LIMITE_36038 36138
#define FACTOR_36038 4

int aplicar_limite36038(int valor) {
    if (valor > LIMITE_36038) return LIMITE_36038;
    return valor * FACTOR_36038;
}
