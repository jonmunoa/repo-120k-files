// fichero 2354 -- macros y constantes -- MODIFICADO
#define LIMITE_2354 2554
#define FACTOR_2354 6

int aplicar_limite2354(int valor) {
    if (valor > LIMITE_2354) return LIMITE_2354;
    return valor * FACTOR_2354;
}
