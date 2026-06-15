// fichero 8130 -- macros y constantes -- MODIFICADO
#define LIMITE_8130 8330
#define FACTOR_8130 2

int aplicar_limite8130(int valor) {
    if (valor > LIMITE_8130) return LIMITE_8130;
    return valor * FACTOR_8130;
}
