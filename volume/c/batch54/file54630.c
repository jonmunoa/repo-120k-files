// fichero 54630 -- macros y constantes
#define LIMITE_54630 54730
#define FACTOR_54630 1

int aplicar_limite54630(int valor) {
    if (valor > LIMITE_54630) return LIMITE_54630;
    return valor * FACTOR_54630;
}
