// fichero 15354 -- macros y constantes
#define LIMITE_15354 15454
#define FACTOR_15354 5

int aplicar_limite15354(int valor) {
    if (valor > LIMITE_15354) return LIMITE_15354;
    return valor * FACTOR_15354;
}
