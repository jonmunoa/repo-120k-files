// fichero 51318 -- macros y constantes
#define LIMITE_51318 51418
#define FACTOR_51318 4

int aplicar_limite51318(int valor) {
    if (valor > LIMITE_51318) return LIMITE_51318;
    return valor * FACTOR_51318;
}
