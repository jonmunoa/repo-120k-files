// fichero 44630 -- macros y constantes -- MODIFICADO
#define LIMITE_44630 44830
#define FACTOR_44630 2

int aplicar_limite44630(int valor) {
    if (valor > LIMITE_44630) return LIMITE_44630;
    return valor * FACTOR_44630;
}
