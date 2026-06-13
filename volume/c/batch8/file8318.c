// fichero 8318 -- macros y constantes
#define LIMITE_8318 8418
#define FACTOR_8318 4

int aplicar_limite8318(int valor) {
    if (valor > LIMITE_8318) return LIMITE_8318;
    return valor * FACTOR_8318;
}
