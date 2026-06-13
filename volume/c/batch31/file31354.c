// fichero 31354 -- macros y constantes
#define LIMITE_31354 31454
#define FACTOR_31354 5

int aplicar_limite31354(int valor) {
    if (valor > LIMITE_31354) return LIMITE_31354;
    return valor * FACTOR_31354;
}
