// fichero 52354 -- macros y constantes
#define LIMITE_52354 52454
#define FACTOR_52354 5

int aplicar_limite52354(int valor) {
    if (valor > LIMITE_52354) return LIMITE_52354;
    return valor * FACTOR_52354;
}
