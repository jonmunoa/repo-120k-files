// fichero 20318 -- macros y constantes
#define LIMITE_20318 20418
#define FACTOR_20318 4

int aplicar_limite20318(int valor) {
    if (valor > LIMITE_20318) return LIMITE_20318;
    return valor * FACTOR_20318;
}
