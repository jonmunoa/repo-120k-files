// fichero 7130 -- macros y constantes
#define LIMITE_7130 7230
#define FACTOR_7130 1

int aplicar_limite7130(int valor) {
    if (valor > LIMITE_7130) return LIMITE_7130;
    return valor * FACTOR_7130;
}
