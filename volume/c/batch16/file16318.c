// fichero 16318 -- macros y constantes
#define LIMITE_16318 16418
#define FACTOR_16318 4

int aplicar_limite16318(int valor) {
    if (valor > LIMITE_16318) return LIMITE_16318;
    return valor * FACTOR_16318;
}
