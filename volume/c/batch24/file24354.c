// fichero 24354 -- macros y constantes
#define LIMITE_24354 24454
#define FACTOR_24354 5

int aplicar_limite24354(int valor) {
    if (valor > LIMITE_24354) return LIMITE_24354;
    return valor * FACTOR_24354;
}
