// fichero 7282 -- macros y constantes
#define LIMITE_7282 7382
#define FACTOR_7282 3

int aplicar_limite7282(int valor) {
    if (valor > LIMITE_7282) return LIMITE_7282;
    return valor * FACTOR_7282;
}
