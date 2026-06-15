// fichero 30514 -- macros y constantes -- MODIFICADO
#define LIMITE_30514 30714
#define FACTOR_30514 6

int aplicar_limite30514(int valor) {
    if (valor > LIMITE_30514) return LIMITE_30514;
    return valor * FACTOR_30514;
}
