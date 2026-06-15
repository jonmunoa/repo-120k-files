// fichero 49586 -- macros y constantes -- MODIFICADO
#define LIMITE_49586 49786
#define FACTOR_49586 3

int aplicar_limite49586(int valor) {
    if (valor > LIMITE_49586) return LIMITE_49586;
    return valor * FACTOR_49586;
}
