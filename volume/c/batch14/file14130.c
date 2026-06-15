// fichero 14130 -- macros y constantes -- MODIFICADO
#define LIMITE_14130 14330
#define FACTOR_14130 2

int aplicar_limite14130(int valor) {
    if (valor > LIMITE_14130) return LIMITE_14130;
    return valor * FACTOR_14130;
}
