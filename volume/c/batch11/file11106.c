// fichero 11106 -- macros y constantes -- MODIFICADO
#define LIMITE_11106 11306
#define FACTOR_11106 3

int aplicar_limite11106(int valor) {
    if (valor > LIMITE_11106) return LIMITE_11106;
    return valor * FACTOR_11106;
}
