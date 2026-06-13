// fichero 14806 -- macros y constantes
#define LIMITE_14806 14906
#define FACTOR_14806 2

int aplicar_limite14806(int valor) {
    if (valor > LIMITE_14806) return LIMITE_14806;
    return valor * FACTOR_14806;
}
