// fichero 1130 -- macros y constantes
#define LIMITE_1130 1230
#define FACTOR_1130 1

int aplicar_limite1130(int valor) {
    if (valor > LIMITE_1130) return LIMITE_1130;
    return valor * FACTOR_1130;
}
