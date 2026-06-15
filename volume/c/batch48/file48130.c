// fichero 48130 -- macros y constantes -- MODIFICADO
#define LIMITE_48130 48330
#define FACTOR_48130 2

int aplicar_limite48130(int valor) {
    if (valor > LIMITE_48130) return LIMITE_48130;
    return valor * FACTOR_48130;
}
