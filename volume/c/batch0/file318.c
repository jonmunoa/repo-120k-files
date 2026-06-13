// fichero 318 -- macros y constantes
#define LIMITE_318 418
#define FACTOR_318 4

int aplicar_limite318(int valor) {
    if (valor > LIMITE_318) return LIMITE_318;
    return valor * FACTOR_318;
}
