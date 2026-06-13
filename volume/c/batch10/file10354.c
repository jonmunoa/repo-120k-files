// fichero 10354 -- macros y constantes
#define LIMITE_10354 10454
#define FACTOR_10354 5

int aplicar_limite10354(int valor) {
    if (valor > LIMITE_10354) return LIMITE_10354;
    return valor * FACTOR_10354;
}
