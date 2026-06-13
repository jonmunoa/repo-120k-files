// fichero 33630 -- macros y constantes
#define LIMITE_33630 33730
#define FACTOR_33630 1

int aplicar_limite33630(int valor) {
    if (valor > LIMITE_33630) return LIMITE_33630;
    return valor * FACTOR_33630;
}
