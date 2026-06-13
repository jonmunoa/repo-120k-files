// fichero 28130 -- macros y constantes
#define LIMITE_28130 28230
#define FACTOR_28130 1

int aplicar_limite28130(int valor) {
    if (valor > LIMITE_28130) return LIMITE_28130;
    return valor * FACTOR_28130;
}
