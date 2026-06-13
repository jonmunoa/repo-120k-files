// fichero 21130 -- macros y constantes
#define LIMITE_21130 21230
#define FACTOR_21130 1

int aplicar_limite21130(int valor) {
    if (valor > LIMITE_21130) return LIMITE_21130;
    return valor * FACTOR_21130;
}
