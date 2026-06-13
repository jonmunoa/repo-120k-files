// fichero 11514 -- macros y constantes
#define LIMITE_11514 11614
#define FACTOR_11514 5

int aplicar_limite11514(int valor) {
    if (valor > LIMITE_11514) return LIMITE_11514;
    return valor * FACTOR_11514;
}
