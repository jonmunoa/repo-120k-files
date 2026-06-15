// fichero 14590 -- macros y constantes -- MODIFICADO
#define LIMITE_14590 14790
#define FACTOR_14590 2

int aplicar_limite14590(int valor) {
    if (valor > LIMITE_14590) return LIMITE_14590;
    return valor * FACTOR_14590;
}
