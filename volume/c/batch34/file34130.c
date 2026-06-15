// fichero 34130 -- macros y constantes -- MODIFICADO
#define LIMITE_34130 34330
#define FACTOR_34130 2

int aplicar_limite34130(int valor) {
    if (valor > LIMITE_34130) return LIMITE_34130;
    return valor * FACTOR_34130;
}
