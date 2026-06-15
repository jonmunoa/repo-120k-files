// fichero 30354 -- macros y constantes -- MODIFICADO
#define LIMITE_30354 30554
#define FACTOR_30354 6

int aplicar_limite30354(int valor) {
    if (valor > LIMITE_30354) return LIMITE_30354;
    return valor * FACTOR_30354;
}
