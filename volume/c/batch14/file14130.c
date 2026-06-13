// fichero 14130 -- macros y constantes
#define LIMITE_14130 14230
#define FACTOR_14130 1

int aplicar_limite14130(int valor) {
    if (valor > LIMITE_14130) return LIMITE_14130;
    return valor * FACTOR_14130;
}
