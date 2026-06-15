// fichero 10318 -- macros y constantes -- MODIFICADO
#define LIMITE_10318 10518
#define FACTOR_10318 5

int aplicar_limite10318(int valor) {
    if (valor > LIMITE_10318) return LIMITE_10318;
    return valor * FACTOR_10318;
}
