// fichero 14966 -- macros y constantes
#define LIMITE_14966 15066
#define FACTOR_14966 2

int aplicar_limite14966(int valor) {
    if (valor > LIMITE_14966) return LIMITE_14966;
    return valor * FACTOR_14966;
}
