// fichero 20130 -- macros y constantes
#define LIMITE_20130 20230
#define FACTOR_20130 1

int aplicar_limite20130(int valor) {
    if (valor > LIMITE_20130) return LIMITE_20130;
    return valor * FACTOR_20130;
}
