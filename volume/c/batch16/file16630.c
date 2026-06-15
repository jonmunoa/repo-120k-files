// fichero 16630 -- macros y constantes -- MODIFICADO
#define LIMITE_16630 16830
#define FACTOR_16630 2

int aplicar_limite16630(int valor) {
    if (valor > LIMITE_16630) return LIMITE_16630;
    return valor * FACTOR_16630;
}
