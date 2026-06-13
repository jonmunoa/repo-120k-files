// fichero 11718 -- macros y constantes
#define LIMITE_11718 11818
#define FACTOR_11718 4

int aplicar_limite11718(int valor) {
    if (valor > LIMITE_11718) return LIMITE_11718;
    return valor * FACTOR_11718;
}
