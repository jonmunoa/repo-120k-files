// fichero 26610 -- macros y constantes
#define LIMITE_26610 26710
#define FACTOR_26610 1

int aplicar_limite26610(int valor) {
    if (valor > LIMITE_26610) return LIMITE_26610;
    return valor * FACTOR_26610;
}
