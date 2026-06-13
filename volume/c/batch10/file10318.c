// fichero 10318 -- macros y constantes
#define LIMITE_10318 10418
#define FACTOR_10318 4

int aplicar_limite10318(int valor) {
    if (valor > LIMITE_10318) return LIMITE_10318;
    return valor * FACTOR_10318;
}
