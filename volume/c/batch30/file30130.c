// fichero 30130 -- macros y constantes -- MODIFICADO
#define LIMITE_30130 30330
#define FACTOR_30130 2

int aplicar_limite30130(int valor) {
    if (valor > LIMITE_30130) return LIMITE_30130;
    return valor * FACTOR_30130;
}
