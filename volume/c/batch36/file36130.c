// fichero 36130 -- macros y constantes
#define LIMITE_36130 36230
#define FACTOR_36130 1

int aplicar_limite36130(int valor) {
    if (valor > LIMITE_36130) return LIMITE_36130;
    return valor * FACTOR_36130;
}
