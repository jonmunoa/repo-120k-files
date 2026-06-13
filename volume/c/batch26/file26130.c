// fichero 26130 -- macros y constantes
#define LIMITE_26130 26230
#define FACTOR_26130 1

int aplicar_limite26130(int valor) {
    if (valor > LIMITE_26130) return LIMITE_26130;
    return valor * FACTOR_26130;
}
