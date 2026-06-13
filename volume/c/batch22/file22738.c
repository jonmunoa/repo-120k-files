// fichero 22738 -- macros y constantes
#define LIMITE_22738 22838
#define FACTOR_22738 4

int aplicar_limite22738(int valor) {
    if (valor > LIMITE_22738) return LIMITE_22738;
    return valor * FACTOR_22738;
}
