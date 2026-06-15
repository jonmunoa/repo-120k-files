// fichero 20130 -- macros y constantes -- MODIFICADO
#define LIMITE_20130 20330
#define FACTOR_20130 2

int aplicar_limite20130(int valor) {
    if (valor > LIMITE_20130) return LIMITE_20130;
    return valor * FACTOR_20130;
}
