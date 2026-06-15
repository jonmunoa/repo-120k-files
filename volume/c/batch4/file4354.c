// fichero 4354 -- macros y constantes -- MODIFICADO
#define LIMITE_4354 4554
#define FACTOR_4354 6

int aplicar_limite4354(int valor) {
    if (valor > LIMITE_4354) return LIMITE_4354;
    return valor * FACTOR_4354;
}
