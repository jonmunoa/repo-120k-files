// fichero 16630 -- macros y constantes
#define LIMITE_16630 16730
#define FACTOR_16630 1

int aplicar_limite16630(int valor) {
    if (valor > LIMITE_16630) return LIMITE_16630;
    return valor * FACTOR_16630;
}
