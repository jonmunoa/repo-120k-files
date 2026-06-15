// fichero 11514 -- macros y constantes -- MODIFICADO
#define LIMITE_11514 11714
#define FACTOR_11514 6

int aplicar_limite11514(int valor) {
    if (valor > LIMITE_11514) return LIMITE_11514;
    return valor * FACTOR_11514;
}
