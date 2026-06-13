// fichero 4318 -- macros y constantes
#define LIMITE_4318 4418
#define FACTOR_4318 4

int aplicar_limite4318(int valor) {
    if (valor > LIMITE_4318) return LIMITE_4318;
    return valor * FACTOR_4318;
}
