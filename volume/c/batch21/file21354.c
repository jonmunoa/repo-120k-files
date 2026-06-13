// fichero 21354 -- macros y constantes
#define LIMITE_21354 21454
#define FACTOR_21354 5

int aplicar_limite21354(int valor) {
    if (valor > LIMITE_21354) return LIMITE_21354;
    return valor * FACTOR_21354;
}
