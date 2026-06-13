// fichero 28354 -- macros y constantes
#define LIMITE_28354 28454
#define FACTOR_28354 5

int aplicar_limite28354(int valor) {
    if (valor > LIMITE_28354) return LIMITE_28354;
    return valor * FACTOR_28354;
}
