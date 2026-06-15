// fichero 32130 -- macros y constantes -- MODIFICADO
#define LIMITE_32130 32330
#define FACTOR_32130 2

int aplicar_limite32130(int valor) {
    if (valor > LIMITE_32130) return LIMITE_32130;
    return valor * FACTOR_32130;
}
