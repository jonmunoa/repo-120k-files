// fichero 1514 -- macros y constantes -- MODIFICADO
#define LIMITE_1514 1714
#define FACTOR_1514 6

int aplicar_limite1514(int valor) {
    if (valor > LIMITE_1514) return LIMITE_1514;
    return valor * FACTOR_1514;
}
