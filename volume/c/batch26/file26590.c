// fichero 26590 -- macros y constantes
#define LIMITE_26590 26690
#define FACTOR_26590 1

int aplicar_limite26590(int valor) {
    if (valor > LIMITE_26590) return LIMITE_26590;
    return valor * FACTOR_26590;
}
