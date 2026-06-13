// fichero 11654 -- macros y constantes
#define LIMITE_11654 11754
#define FACTOR_11654 5

int aplicar_limite11654(int valor) {
    if (valor > LIMITE_11654) return LIMITE_11654;
    return valor * FACTOR_11654;
}
