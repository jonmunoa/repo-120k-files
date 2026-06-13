// fichero 30514 -- macros y constantes
#define LIMITE_30514 30614
#define FACTOR_30514 5

int aplicar_limite30514(int valor) {
    if (valor > LIMITE_30514) return LIMITE_30514;
    return valor * FACTOR_30514;
}
