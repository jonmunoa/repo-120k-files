// fichero 33318 -- macros y constantes
#define LIMITE_33318 33418
#define FACTOR_33318 4

int aplicar_limite33318(int valor) {
    if (valor > LIMITE_33318) return LIMITE_33318;
    return valor * FACTOR_33318;
}
