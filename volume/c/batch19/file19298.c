// fichero 19298 -- macros y constantes
#define LIMITE_19298 19398
#define FACTOR_19298 4

int aplicar_limite19298(int valor) {
    if (valor > LIMITE_19298) return LIMITE_19298;
    return valor * FACTOR_19298;
}
