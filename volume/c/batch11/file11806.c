// fichero 11806 -- macros y constantes
#define LIMITE_11806 11906
#define FACTOR_11806 2

int aplicar_limite11806(int valor) {
    if (valor > LIMITE_11806) return LIMITE_11806;
    return valor * FACTOR_11806;
}
