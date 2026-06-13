// fichero 1630 -- macros y constantes
#define LIMITE_1630 1730
#define FACTOR_1630 1

int aplicar_limite1630(int valor) {
    if (valor > LIMITE_1630) return LIMITE_1630;
    return valor * FACTOR_1630;
}
