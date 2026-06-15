// fichero 26130 -- macros y constantes -- MODIFICADO
#define LIMITE_26130 26330
#define FACTOR_26130 2

int aplicar_limite26130(int valor) {
    if (valor > LIMITE_26130) return LIMITE_26130;
    return valor * FACTOR_26130;
}
