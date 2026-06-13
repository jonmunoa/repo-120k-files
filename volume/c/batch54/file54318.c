// fichero 54318 -- macros y constantes
#define LIMITE_54318 54418
#define FACTOR_54318 4

int aplicar_limite54318(int valor) {
    if (valor > LIMITE_54318) return LIMITE_54318;
    return valor * FACTOR_54318;
}
