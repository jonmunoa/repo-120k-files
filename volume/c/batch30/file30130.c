// fichero 30130 -- macros y constantes
#define LIMITE_30130 30230
#define FACTOR_30130 1

int aplicar_limite30130(int valor) {
    if (valor > LIMITE_30130) return LIMITE_30130;
    return valor * FACTOR_30130;
}
