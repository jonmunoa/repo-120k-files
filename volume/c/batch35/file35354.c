// fichero 35354 -- macros y constantes
#define LIMITE_35354 35454
#define FACTOR_35354 5

int aplicar_limite35354(int valor) {
    if (valor > LIMITE_35354) return LIMITE_35354;
    return valor * FACTOR_35354;
}
