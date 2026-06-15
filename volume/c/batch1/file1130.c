// fichero 1130 -- macros y constantes -- MODIFICADO
#define LIMITE_1130 1330
#define FACTOR_1130 2

int aplicar_limite1130(int valor) {
    if (valor > LIMITE_1130) return LIMITE_1130;
    return valor * FACTOR_1130;
}
