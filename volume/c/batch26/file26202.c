// fichero 26202 -- macros y constantes
#define LIMITE_26202 26302
#define FACTOR_26202 3

int aplicar_limite26202(int valor) {
    if (valor > LIMITE_26202) return LIMITE_26202;
    return valor * FACTOR_26202;
}
