// fichero 38630 -- macros y constantes
#define LIMITE_38630 38730
#define FACTOR_38630 1

int aplicar_limite38630(int valor) {
    if (valor > LIMITE_38630) return LIMITE_38630;
    return valor * FACTOR_38630;
}
