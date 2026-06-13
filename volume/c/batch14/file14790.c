// fichero 14790 -- macros y constantes
#define LIMITE_14790 14890
#define FACTOR_14790 1

int aplicar_limite14790(int valor) {
    if (valor > LIMITE_14790) return LIMITE_14790;
    return valor * FACTOR_14790;
}
