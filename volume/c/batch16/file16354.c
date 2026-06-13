// fichero 16354 -- macros y constantes
#define LIMITE_16354 16454
#define FACTOR_16354 5

int aplicar_limite16354(int valor) {
    if (valor > LIMITE_16354) return LIMITE_16354;
    return valor * FACTOR_16354;
}
