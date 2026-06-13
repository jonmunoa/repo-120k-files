// fichero 46282 -- macros y constantes
#define LIMITE_46282 46382
#define FACTOR_46282 3

int aplicar_limite46282(int valor) {
    if (valor > LIMITE_46282) return LIMITE_46282;
    return valor * FACTOR_46282;
}
