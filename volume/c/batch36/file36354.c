// fichero 36354 -- macros y constantes -- MODIFICADO
#define LIMITE_36354 36554
#define FACTOR_36354 6

int aplicar_limite36354(int valor) {
    if (valor > LIMITE_36354) return LIMITE_36354;
    return valor * FACTOR_36354;
}
