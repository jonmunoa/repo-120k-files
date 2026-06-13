// fichero 25318 -- macros y constantes
#define LIMITE_25318 25418
#define FACTOR_25318 4

int aplicar_limite25318(int valor) {
    if (valor > LIMITE_25318) return LIMITE_25318;
    return valor * FACTOR_25318;
}
