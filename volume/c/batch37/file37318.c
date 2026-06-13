// fichero 37318 -- macros y constantes
#define LIMITE_37318 37418
#define FACTOR_37318 4

int aplicar_limite37318(int valor) {
    if (valor > LIMITE_37318) return LIMITE_37318;
    return valor * FACTOR_37318;
}
