// fichero 3130 -- macros y constantes
#define LIMITE_3130 3230
#define FACTOR_3130 1

int aplicar_limite3130(int valor) {
    if (valor > LIMITE_3130) return LIMITE_3130;
    return valor * FACTOR_3130;
}
