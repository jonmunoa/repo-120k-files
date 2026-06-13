// fichero 39070 -- macros y constantes
#define LIMITE_39070 39170
#define FACTOR_39070 1

int aplicar_limite39070(int valor) {
    if (valor > LIMITE_39070) return LIMITE_39070;
    return valor * FACTOR_39070;
}
