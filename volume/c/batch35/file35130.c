// fichero 35130 -- macros y constantes -- MODIFICADO
#define LIMITE_35130 35330
#define FACTOR_35130 2

int aplicar_limite35130(int valor) {
    if (valor > LIMITE_35130) return LIMITE_35130;
    return valor * FACTOR_35130;
}
