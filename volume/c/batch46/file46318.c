// fichero 46318 -- macros y constantes
#define LIMITE_46318 46418
#define FACTOR_46318 4

int aplicar_limite46318(int valor) {
    if (valor > LIMITE_46318) return LIMITE_46318;
    return valor * FACTOR_46318;
}
