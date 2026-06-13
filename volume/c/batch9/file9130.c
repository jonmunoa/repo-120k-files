// fichero 9130 -- macros y constantes
#define LIMITE_9130 9230
#define FACTOR_9130 1

int aplicar_limite9130(int valor) {
    if (valor > LIMITE_9130) return LIMITE_9130;
    return valor * FACTOR_9130;
}
