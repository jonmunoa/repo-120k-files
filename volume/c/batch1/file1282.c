// fichero 1282 -- macros y constantes
#define LIMITE_1282 1382
#define FACTOR_1282 3

int aplicar_limite1282(int valor) {
    if (valor > LIMITE_1282) return LIMITE_1282;
    return valor * FACTOR_1282;
}
