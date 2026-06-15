// fichero 5630 -- macros y constantes -- MODIFICADO
#define LIMITE_5630 5830
#define FACTOR_5630 2

int aplicar_limite5630(int valor) {
    if (valor > LIMITE_5630) return LIMITE_5630;
    return valor * FACTOR_5630;
}
