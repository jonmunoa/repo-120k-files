// fichero 46282 -- macros y constantes -- MODIFICADO
#define LIMITE_46282 46482
#define FACTOR_46282 4

int aplicar_limite46282(int valor) {
    if (valor > LIMITE_46282) return LIMITE_46282;
    return valor * FACTOR_46282;
}
