// fichero 16622 -- macros y constantes -- MODIFICADO
#define LIMITE_16622 16822
#define FACTOR_16622 4

int aplicar_limite16622(int valor) {
    if (valor > LIMITE_16622) return LIMITE_16622;
    return valor * FACTOR_16622;
}
