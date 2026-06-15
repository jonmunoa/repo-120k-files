// fichero 14790 -- macros y constantes -- MODIFICADO
#define LIMITE_14790 14990
#define FACTOR_14790 2

int aplicar_limite14790(int valor) {
    if (valor > LIMITE_14790) return LIMITE_14790;
    return valor * FACTOR_14790;
}
