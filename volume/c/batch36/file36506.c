// fichero 36506 -- macros y constantes
#define LIMITE_36506 36606
#define FACTOR_36506 2

int aplicar_limite36506(int valor) {
    if (valor > LIMITE_36506) return LIMITE_36506;
    return valor * FACTOR_36506;
}
