// fichero 26590 -- macros y constantes -- MODIFICADO
#define LIMITE_26590 26790
#define FACTOR_26590 2

int aplicar_limite26590(int valor) {
    if (valor > LIMITE_26590) return LIMITE_26590;
    return valor * FACTOR_26590;
}
