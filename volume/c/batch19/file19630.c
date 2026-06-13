// fichero 19630 -- macros y constantes
#define LIMITE_19630 19730
#define FACTOR_19630 1

int aplicar_limite19630(int valor) {
    if (valor > LIMITE_19630) return LIMITE_19630;
    return valor * FACTOR_19630;
}
