// fichero 8130 -- macros y constantes
#define LIMITE_8130 8230
#define FACTOR_8130 1

int aplicar_limite8130(int valor) {
    if (valor > LIMITE_8130) return LIMITE_8130;
    return valor * FACTOR_8130;
}
