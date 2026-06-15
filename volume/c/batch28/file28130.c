// fichero 28130 -- macros y constantes -- MODIFICADO
#define LIMITE_28130 28330
#define FACTOR_28130 2

int aplicar_limite28130(int valor) {
    if (valor > LIMITE_28130) return LIMITE_28130;
    return valor * FACTOR_28130;
}
