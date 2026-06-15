// fichero 32586 -- macros y constantes -- MODIFICADO
#define LIMITE_32586 32786
#define FACTOR_32586 3

int aplicar_limite32586(int valor) {
    if (valor > LIMITE_32586) return LIMITE_32586;
    return valor * FACTOR_32586;
}
