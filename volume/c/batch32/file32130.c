// fichero 32130 -- macros y constantes
#define LIMITE_32130 32230
#define FACTOR_32130 1

int aplicar_limite32130(int valor) {
    if (valor > LIMITE_32130) return LIMITE_32130;
    return valor * FACTOR_32130;
}
