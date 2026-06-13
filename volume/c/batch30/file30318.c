// fichero 30318 -- macros y constantes
#define LIMITE_30318 30418
#define FACTOR_30318 4

int aplicar_limite30318(int valor) {
    if (valor > LIMITE_30318) return LIMITE_30318;
    return valor * FACTOR_30318;
}
