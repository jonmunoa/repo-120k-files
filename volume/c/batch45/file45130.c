// fichero 45130 -- macros y constantes -- MODIFICADO
#define LIMITE_45130 45330
#define FACTOR_45130 2

int aplicar_limite45130(int valor) {
    if (valor > LIMITE_45130) return LIMITE_45130;
    return valor * FACTOR_45130;
}
