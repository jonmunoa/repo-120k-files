// fichero 41318 -- macros y constantes
#define LIMITE_41318 41418
#define FACTOR_41318 4

int aplicar_limite41318(int valor) {
    if (valor > LIMITE_41318) return LIMITE_41318;
    return valor * FACTOR_41318;
}
