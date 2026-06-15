// fichero 46130 -- macros y constantes -- MODIFICADO
#define LIMITE_46130 46330
#define FACTOR_46130 2

int aplicar_limite46130(int valor) {
    if (valor > LIMITE_46130) return LIMITE_46130;
    return valor * FACTOR_46130;
}
