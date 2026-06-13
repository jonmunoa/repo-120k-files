// fichero 30210 -- macros y constantes
#define LIMITE_30210 30310
#define FACTOR_30210 1

int aplicar_limite30210(int valor) {
    if (valor > LIMITE_30210) return LIMITE_30210;
    return valor * FACTOR_30210;
}
