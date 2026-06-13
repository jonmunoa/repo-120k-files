// fichero 49586 -- macros y constantes
#define LIMITE_49586 49686
#define FACTOR_49586 2

int aplicar_limite49586(int valor) {
    if (valor > LIMITE_49586) return LIMITE_49586;
    return valor * FACTOR_49586;
}
