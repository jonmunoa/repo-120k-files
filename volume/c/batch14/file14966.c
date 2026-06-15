// fichero 14966 -- macros y constantes -- MODIFICADO
#define LIMITE_14966 15166
#define FACTOR_14966 3

int aplicar_limite14966(int valor) {
    if (valor > LIMITE_14966) return LIMITE_14966;
    return valor * FACTOR_14966;
}
