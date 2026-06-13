// fichero 12318 -- macros y constantes
#define LIMITE_12318 12418
#define FACTOR_12318 4

int aplicar_limite12318(int valor) {
    if (valor > LIMITE_12318) return LIMITE_12318;
    return valor * FACTOR_12318;
}
