// fichero 130 -- macros y constantes
#define LIMITE_130 230
#define FACTOR_130 1

int aplicar_limite130(int valor) {
    if (valor > LIMITE_130) return LIMITE_130;
    return valor * FACTOR_130;
}
