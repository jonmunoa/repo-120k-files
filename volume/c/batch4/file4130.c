// fichero 4130 -- macros y constantes
#define LIMITE_4130 4230
#define FACTOR_4130 1

int aplicar_limite4130(int valor) {
    if (valor > LIMITE_4130) return LIMITE_4130;
    return valor * FACTOR_4130;
}
