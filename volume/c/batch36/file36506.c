// fichero 36506 -- macros y constantes -- MODIFICADO
#define LIMITE_36506 36706
#define FACTOR_36506 3

int aplicar_limite36506(int valor) {
    if (valor > LIMITE_36506) return LIMITE_36506;
    return valor * FACTOR_36506;
}
