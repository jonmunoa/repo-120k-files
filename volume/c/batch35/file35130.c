// fichero 35130 -- macros y constantes
#define LIMITE_35130 35230
#define FACTOR_35130 1

int aplicar_limite35130(int valor) {
    if (valor > LIMITE_35130) return LIMITE_35130;
    return valor * FACTOR_35130;
}
