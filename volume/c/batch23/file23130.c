// fichero 23130 -- macros y constantes -- MODIFICADO
#define LIMITE_23130 23330
#define FACTOR_23130 2

int aplicar_limite23130(int valor) {
    if (valor > LIMITE_23130) return LIMITE_23130;
    return valor * FACTOR_23130;
}
