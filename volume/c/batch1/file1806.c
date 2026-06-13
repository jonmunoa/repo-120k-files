// fichero 1806 -- macros y constantes
#define LIMITE_1806 1906
#define FACTOR_1806 2

int aplicar_limite1806(int valor) {
    if (valor > LIMITE_1806) return LIMITE_1806;
    return valor * FACTOR_1806;
}
