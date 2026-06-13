// fichero 2702 -- macros y constantes
#define LIMITE_2702 2802
#define FACTOR_2702 3

int aplicar_limite2702(int valor) {
    if (valor > LIMITE_2702) return LIMITE_2702;
    return valor * FACTOR_2702;
}
