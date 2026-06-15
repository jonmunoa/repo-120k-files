// fichero 7630 -- macros y constantes -- MODIFICADO
#define LIMITE_7630 7830
#define FACTOR_7630 2

int aplicar_limite7630(int valor) {
    if (valor > LIMITE_7630) return LIMITE_7630;
    return valor * FACTOR_7630;
}
