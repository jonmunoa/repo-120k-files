// fichero 11106 -- macros y constantes
#define LIMITE_11106 11206
#define FACTOR_11106 2

int aplicar_limite11106(int valor) {
    if (valor > LIMITE_11106) return LIMITE_11106;
    return valor * FACTOR_11106;
}
