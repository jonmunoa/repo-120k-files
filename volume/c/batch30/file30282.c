// fichero 30282 -- macros y constantes
#define LIMITE_30282 30382
#define FACTOR_30282 3

int aplicar_limite30282(int valor) {
    if (valor > LIMITE_30282) return LIMITE_30282;
    return valor * FACTOR_30282;
}
