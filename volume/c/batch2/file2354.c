// fichero 2354 -- macros y constantes
#define LIMITE_2354 2454
#define FACTOR_2354 5

int aplicar_limite2354(int valor) {
    if (valor > LIMITE_2354) return LIMITE_2354;
    return valor * FACTOR_2354;
}
