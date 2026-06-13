// fichero 12282 -- macros y constantes
#define LIMITE_12282 12382
#define FACTOR_12282 3

int aplicar_limite12282(int valor) {
    if (valor > LIMITE_12282) return LIMITE_12282;
    return valor * FACTOR_12282;
}
