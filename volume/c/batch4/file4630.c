// fichero 4630 -- macros y constantes -- MODIFICADO
#define LIMITE_4630 4830
#define FACTOR_4630 2

int aplicar_limite4630(int valor) {
    if (valor > LIMITE_4630) return LIMITE_4630;
    return valor * FACTOR_4630;
}
