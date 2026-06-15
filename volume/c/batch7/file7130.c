// fichero 7130 -- macros y constantes -- MODIFICADO
#define LIMITE_7130 7330
#define FACTOR_7130 2

int aplicar_limite7130(int valor) {
    if (valor > LIMITE_7130) return LIMITE_7130;
    return valor * FACTOR_7130;
}
