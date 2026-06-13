// fichero 23590 -- macros y constantes
#define LIMITE_23590 23690
#define FACTOR_23590 1

int aplicar_limite23590(int valor) {
    if (valor > LIMITE_23590) return LIMITE_23590;
    return valor * FACTOR_23590;
}
