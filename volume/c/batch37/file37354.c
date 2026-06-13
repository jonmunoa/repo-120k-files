// fichero 37354 -- macros y constantes
#define LIMITE_37354 37454
#define FACTOR_37354 5

int aplicar_limite37354(int valor) {
    if (valor > LIMITE_37354) return LIMITE_37354;
    return valor * FACTOR_37354;
}
