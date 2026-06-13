// fichero 36354 -- macros y constantes
#define LIMITE_36354 36454
#define FACTOR_36354 5

int aplicar_limite36354(int valor) {
    if (valor > LIMITE_36354) return LIMITE_36354;
    return valor * FACTOR_36354;
}
