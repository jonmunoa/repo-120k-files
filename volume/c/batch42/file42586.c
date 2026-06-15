// fichero 42586 -- macros y constantes -- MODIFICADO
#define LIMITE_42586 42786
#define FACTOR_42586 3

int aplicar_limite42586(int valor) {
    if (valor > LIMITE_42586) return LIMITE_42586;
    return valor * FACTOR_42586;
}
