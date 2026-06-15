// fichero 130 -- macros y constantes -- MODIFICADO
#define LIMITE_130 330
#define FACTOR_130 2

int aplicar_limite130(int valor) {
    if (valor > LIMITE_130) return LIMITE_130;
    return valor * FACTOR_130;
}
