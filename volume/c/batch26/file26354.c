// fichero 26354 -- macros y constantes
#define LIMITE_26354 26454
#define FACTOR_26354 5

int aplicar_limite26354(int valor) {
    if (valor > LIMITE_26354) return LIMITE_26354;
    return valor * FACTOR_26354;
}
