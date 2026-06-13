// fichero 16282 -- macros y constantes
#define LIMITE_16282 16382
#define FACTOR_16282 3

int aplicar_limite16282(int valor) {
    if (valor > LIMITE_16282) return LIMITE_16282;
    return valor * FACTOR_16282;
}
