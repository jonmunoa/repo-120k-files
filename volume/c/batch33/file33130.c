// fichero 33130 -- macros y constantes -- MODIFICADO
#define LIMITE_33130 33330
#define FACTOR_33130 2

int aplicar_limite33130(int valor) {
    if (valor > LIMITE_33130) return LIMITE_33130;
    return valor * FACTOR_33130;
}
