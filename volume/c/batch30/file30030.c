// fichero 30030 -- macros y constantes
#define LIMITE_30030 30130
#define FACTOR_30030 1

int aplicar_limite30030(int valor) {
    if (valor > LIMITE_30030) return LIMITE_30030;
    return valor * FACTOR_30030;
}
