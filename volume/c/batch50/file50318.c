// fichero 50318 -- macros y constantes
#define LIMITE_50318 50418
#define FACTOR_50318 4

int aplicar_limite50318(int valor) {
    if (valor > LIMITE_50318) return LIMITE_50318;
    return valor * FACTOR_50318;
}
