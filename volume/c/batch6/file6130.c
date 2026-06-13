// fichero 6130 -- macros y constantes
#define LIMITE_6130 6230
#define FACTOR_6130 1

int aplicar_limite6130(int valor) {
    if (valor > LIMITE_6130) return LIMITE_6130;
    return valor * FACTOR_6130;
}
