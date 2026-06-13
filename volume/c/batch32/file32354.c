// fichero 32354 -- macros y constantes
#define LIMITE_32354 32454
#define FACTOR_32354 5

int aplicar_limite32354(int valor) {
    if (valor > LIMITE_32354) return LIMITE_32354;
    return valor * FACTOR_32354;
}
