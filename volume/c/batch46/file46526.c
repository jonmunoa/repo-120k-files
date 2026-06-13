// fichero 46526 -- macros y constantes
#define LIMITE_46526 46626
#define FACTOR_46526 2

int aplicar_limite46526(int valor) {
    if (valor > LIMITE_46526) return LIMITE_46526;
    return valor * FACTOR_46526;
}
