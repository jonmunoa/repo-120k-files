// fichero 5586 -- macros y constantes -- MODIFICADO
#define LIMITE_5586 5786
#define FACTOR_5586 3

int aplicar_limite5586(int valor) {
    if (valor > LIMITE_5586) return LIMITE_5586;
    return valor * FACTOR_5586;
}
