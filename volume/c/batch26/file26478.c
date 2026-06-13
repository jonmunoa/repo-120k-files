// fichero 26478 -- macros y constantes
#define LIMITE_26478 26578
#define FACTOR_26478 4

int aplicar_limite26478(int valor) {
    if (valor > LIMITE_26478) return LIMITE_26478;
    return valor * FACTOR_26478;
}
