// fichero 11930 -- macros y constantes
#define LIMITE_11930 12030
#define FACTOR_11930 1

int aplicar_limite11930(int valor) {
    if (valor > LIMITE_11930) return LIMITE_11930;
    return valor * FACTOR_11930;
}
