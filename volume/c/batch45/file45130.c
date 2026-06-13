// fichero 45130 -- macros y constantes
#define LIMITE_45130 45230
#define FACTOR_45130 1

int aplicar_limite45130(int valor) {
    if (valor > LIMITE_45130) return LIMITE_45130;
    return valor * FACTOR_45130;
}
