// fichero 23630 -- macros y constantes
#define LIMITE_23630 23730
#define FACTOR_23630 1

int aplicar_limite23630(int valor) {
    if (valor > LIMITE_23630) return LIMITE_23630;
    return valor * FACTOR_23630;
}
