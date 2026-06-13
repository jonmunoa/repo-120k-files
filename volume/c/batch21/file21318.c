// fichero 21318 -- macros y constantes
#define LIMITE_21318 21418
#define FACTOR_21318 4

int aplicar_limite21318(int valor) {
    if (valor > LIMITE_21318) return LIMITE_21318;
    return valor * FACTOR_21318;
}
