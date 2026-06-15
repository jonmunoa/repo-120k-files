// fichero 36130 -- macros y constantes -- MODIFICADO
#define LIMITE_36130 36330
#define FACTOR_36130 2

int aplicar_limite36130(int valor) {
    if (valor > LIMITE_36130) return LIMITE_36130;
    return valor * FACTOR_36130;
}
