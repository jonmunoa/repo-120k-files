// fichero 16590 -- macros y constantes
#define LIMITE_16590 16690
#define FACTOR_16590 1

int aplicar_limite16590(int valor) {
    if (valor > LIMITE_16590) return LIMITE_16590;
    return valor * FACTOR_16590;
}
